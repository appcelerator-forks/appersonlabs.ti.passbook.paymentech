//
//  CPSAddress.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface CPSAddress : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *addressOne;
@property (nonatomic, copy) NSString *addressTwo;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *phoneNumber;

//@property (nonatomic, copy) NSString *phoneType;
//@property (nonatomic, copy) NSString *shippingMethod;   // TODO: why does the GW have a separate shipping address, do we need to subclass?

@end

