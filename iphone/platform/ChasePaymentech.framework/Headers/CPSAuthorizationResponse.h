//
//  CPSAuthorizationResponse.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/12/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPSAuthorizationResponse : NSObject

@property (nonatomic, copy) NSString *approvalStatus;
@property (nonatomic, copy) NSString *authorizationCode;
@property (nonatomic, copy) NSString *mcRecurringAdvCode;
@property (nonatomic, copy) NSString *visaVbVRespCode;
@property (nonatomic, copy) NSString *avsRespCode;
@property (nonatomic, copy) NSString *hostAvsRespCode;
@property (nonatomic, copy) NSString *cardBrand;
@property (nonatomic, copy) NSString *cvvRespCode;
@property (nonatomic, copy) NSString *orderId;
@property (nonatomic, copy) NSString *procStatus;
@property (nonatomic, copy) NSString *procStatusMessage;
@property (nonatomic, copy) NSString *requestedAmount;
@property (nonatomic, copy) NSString *respCode;
@property (nonatomic, copy) NSString *respCodeMessage;
@property (nonatomic, copy) NSString *hostResponseCode;
@property (nonatomic, copy) NSString *hostResponseCodeMessage;
@property (nonatomic, copy) NSString *txRefNum;
@property (nonatomic, copy) NSString *lastFourDPAN;
@property (nonatomic, copy) NSString *redeemedAmount;
@property (nonatomic, copy) NSString *remainingBalance;
@property (nonatomic, copy) NSString *partialAuthOccurred;



@end
