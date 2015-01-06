//
//  CPSEnhancedAuth.h
//  ChasePaymentech
//
//  Created by Anil on 04/08/14.
//  Copyright (c) 2014 ChasePaymentech. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface CPSEnhancedAuth : NSObject<NSCopying>

@property(nonatomic,copy) NSString *ctiAffluentCard;
@property(nonatomic,copy) NSString *ctiCommercialCard;
@property(nonatomic,copy) NSString *ctiDurbinExemption;
@property(nonatomic,copy) NSString *ctiHealthcareCard;
@property(nonatomic,copy) NSString *ctiLevel3Eligible;
@property(nonatomic,copy) NSString *ctiPayrollCard;
@property(nonatomic,copy) NSString *ctiPrepaidCard;
@property(nonatomic,copy) NSString *ctiPINlessDebitCard;
@property(nonatomic,copy) NSString *ctiSignatureDebitCard;
@property(nonatomic,copy) NSString *ctiIssuingCountry;
@property(nonatomic,copy) NSString *ctiDurbinExcemption;

@end
