/**
 * ti.passbook.paymentech
 *
 * Created by Your Name
 * Copyright (c) 2014 Your Company. All rights reserved.
 */

#import "TiPassbookPaymentechGatewayProxy.h"
#import "TiPassbookPaymentechAuthorizationRequestProxy.h"
#import "TiUtils.h"
#import <objc/runtime.h>

@implementation TiPassbookPaymentechGatewayProxy
@synthesize gateway;

-(id)init
{
    self.gateway = [[[CPSGateway alloc] init] autorelease];
    return [super init];
}


-(void)setTest:(id)value
{
    self.gateway.test = [TiUtils boolValue:value];
}

-(BOOL)test
{
    return self.gateway.test;
}

-(void)authorizePayment:(id) args
{
    TiPassbookPaymentechAuthorizationRequestProxy* authrequest = [args objectAtIndex:0];
    
    RELEASE_TO_NIL(authCallback);
    id callback = [args objectAtIndex:1];
    authCallback = [callback retain];

    [self.gateway authorizePaymentWithRequest:authrequest.authRequest withCompletionHandler:^(CPSAuthorizationResponse *response, NSError *error) {
        
        NSDictionary *event = [self dictionaryValues:response fromClass:[CPSAuthorizationResponse class]];
        NSString* eventType = nil;
        // Check for procStatus=0, that is a good validation check.
        // respCode==00 is an authorization approval
        if(error != nil) {
            
            eventType = @"error";

        } else {
            if([response.procStatus isEqualToString:@"0"]
               && [response.respCode isEqualToString:@"00"]) {
                
                eventType = @"approved";

            } else {
                eventType = @"declined";
            }
        }
        
        [self _fireEventToListener:@"declined" withObject:event listener:authCallback
                        thisObject:nil];
    }];

}

- (NSDictionary*)dictionaryValues:(id) instance fromClass:(id) classType {
    
    u_int count;
    
    objc_property_t *properties = class_copyPropertyList(classType, &count);
    
    NSMutableDictionary *dict = [[NSMutableDictionary alloc] initWithCapacity:count];
    
    for (int i = 0; i<count; i++) {
        NSString *str = [NSString stringWithCString:property_getName(properties[i])
                                           encoding:NSUTF8StringEncoding];
        
        //Set the dicationary values from our properties
        [dict setValue:[instance valueForKey:str] forKey:str];
    }
    free(properties);
    
    return [dict autorelease];
}
@end
