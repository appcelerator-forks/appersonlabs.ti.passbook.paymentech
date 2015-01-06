/**
 * ti.passbook.paymentech
 *
 * Created by Your Name
 * Copyright (c) 2014 Your Company. All rights reserved.
 */

#import "TiPassbookPaymentechAuthorizationRequestProxy.h"
#import "TiUtils.h"

@implementation TiPassbookPaymentechAuthorizationRequestProxy
@synthesize authRequest;

-(id)init
{
    self.authRequest = [[[CPSAuthorizationRequest alloc] initWithPaymentData:[self valueForUndefinedKey:@"paymentData"]] autorelease];
    
    return [super init];
}

-(void)setOrderId:(id)value
{
    self.authRequest.orderId = [TiUtils stringValue:value];
}

-(BOOL)test
{
    return self.authRequest.orderId;
}
@end
