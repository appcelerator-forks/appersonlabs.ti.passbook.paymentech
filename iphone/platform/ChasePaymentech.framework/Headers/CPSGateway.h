//
//  CPSGateway.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan & Jefferies, Philip.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CPSGateway.h"
#import "CPSAuthorizationResponse.h"
#import "CPSAuthorizationRequest.h"
#import "CPSDecryptionRequest.h"
#import <CoreLocation/CoreLocation.h>


typedef void (^CPSAuthorizationCompletionHandler)(CPSAuthorizationResponse *, NSError*);


/**
 * The CPSGateway provides access to the Chase Paymentech Gateway for InApp payment processing for registered merchants.
 */
@interface CPSGateway : NSObject

/**
 *	Create a singleton object for CPSGateway.
 */
+ (CPSGateway *)sharedInstance;


@property (nonatomic, assign, getter=isTest) BOOL test;

#ifdef DEBUG
@property (nonatomic, assign, getter=isDevelopment) BOOL development;
#endif


/**
 Authorizes a payment given a PKPaymentToken and order id.  Calls back on the completionHandler with the results of the authorization
 @param request the request containing payment bundle data and other flags
 @param completionHandler the callback
 */
- (void)authorizePaymentWithRequest:(CPSAuthorizationRequest *)request withCompletionHandler:(CPSAuthorizationCompletionHandler)completionHandler;

/**
 Creates a formatted payment request which may be passed to ChasePaymentech's Gateway.
 @param request the request containing payment bundle data and other flags
 @return the JSON data as a string
 */
- (NSData *)formatPaymentWithRequest:(CPSAuthorizationRequest *)request;

/**
 Returns an object containing a base64 encoded String used in merchant to Paymentech server decryption requests
 @param request the request containing payment bundle data and other flags
 @return a CPSDecryptionRequest object which includes the encrypted data and algorithm specifier
 */
- (CPSDecryptionRequest *)formatDecryptionRequestWithRequest:(CPSAuthorizationRequest *)request;



@end
