//
//  CPSAuthorizationRequest.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CPSOrderNotification.h"

#import "CPSAudit.h"
#import "CPSShippingAddress.h"
#import "CPSBillingAddress.h"
#import "CPSOrderNotification.h"
#import "CPSLevel2.h"
#import "CPSReceiptRequest.h"
#import "CPSConstants.h"

@interface CPSAuthorizationRequest : NSObject

/**
 Set application defined string data. (Optional)
 Maximum length can be 1024.
 */
@property (nonatomic) 			NSString *applicationData;

/**
 Set an Order Id.(Mandatory)
 Maximum length can be 22 and minimum  1.
 */
@property (nonatomic) 			NSString *orderId;

/**
 Set an optional merchantId for this request.(Optional)
 Maximum length can be ??? characters TODO: determine max char range for mid.
 */
@property (nonatomic) 			NSString *merchantId;

/**
 Set Discount Amount.(Optional)
 Maximum value can be 99999999 and minimum can be 1.
 Value is assumed to be specified in US/CA cents
 Example: $10.00 is specified as 1000
 */
@property (nonatomic) 			NSUInteger discountAmount;

/**
 Set Tip Amount.(Optional)
 Maximum value can be 99999999 and minimum can be 1.
 Value is assumed to be specified in US/CA cents
 Example: $10.00 is specified as 1000
 */
@property (nonatomic) 			NSUInteger tipAmount;

/**
 Set Tax Amount.(Optional)
 Maximum value can be 99999999 and minimum can be 1.
 Value is assumed to be specified in US/CA cents
 Example: $10.00 is specified as 1000
 */
@property (nonatomic) 			NSUInteger taxAmount;

/**
 Set Surcharge Amount.(Optional)
 Maximum value can be 99999999 and minimum can be 1.
 Value is assumed to be specified in US/CA cents
 Example: $10.00 is specified as 1000
 */
@property (nonatomic) 			NSUInteger surchargeAmount;

/**
 Set Comments.(Optional)
 Maximum length can be 64.
 */
@property (nonatomic, copy) 	NSString *comments;

/**
 Set Card Indicators.(Optional)
 */
@property (nonatomic) 			CPSCardIndicators cardIndicators;

/**
 Set Recurring Indicators.(Optional)
 */
@property (nonatomic) 			CPSRecurringInd recurringInd;

/**
 Set Partial Auth Indicators.(Optional)
 */
@property (nonatomic)			CPSPartialAuthInd partialAuthInd;

/**
 Set Audit object.(Optional)
 */
@property (nonatomic, copy) 	CPSAudit *audit;

/*
 UTF-8 encoded JSon dictionary of encrypted payment data.  Ready for transmission to merchant's e-comerce backend for decryption and submission to a payment processor's gateway
	Set only if not provided in constructor.
 */
@property (nonatomic, copy) 	NSData *paymentData;

/**
 Set receipt object.(Optional)
 */
@property (nonatomic, copy) 	CPSReceiptRequest *sendReceipt;

/**
 Set order notification object.(Optional)
 */
@property (nonatomic, copy) 	CPSOrderNotification *orderNotification;

/**
 Set level2 object.(Optional)
 */
@property (nonatomic, copy) 	CPSLevel2 *level2;

/**
 Set ship address object.(Optional)
 */
@property (nonatomic, copy) 	CPSShippingAddress *shipAddress;

/**
 Set billing address object.(Optional)
 */
@property (nonatomic, copy) 	CPSBillingAddress *billingAddress;


@property (nonatomic) BOOL 	capture;

/**
 Initializing CPSAuthorizationRequest with paymentdata.
 *
 * @param paymentData - UTF-8 encoded JSon dictionary of encrypted payment data.  Ready for transmission to merchant's e-comerce backend for decryption and submission to a payment processor's gateway
 */
- (instancetype)initWithPaymentData:(NSData *)paymentData NS_DESIGNATED_INITIALIZER;

/**
 Return an array. It validates all the data, and creates NSError objects for each failed validation and returns them in a NSArray object.
 This method also validates child objects.
 Note: contents of paymentData will not be validated.
 */
- (NSArray *)validate;



@end

