//
//  CPSShippingAddr.h
//  ChasePaymentech
//
//  Created by Anil on 04/08/14.
//  Copyright (c) 2014 ChasePaymentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import "CPSConstants.h"
#import "CPSAddress.h"



@interface CPSShippingAddress : CPSAddress <NSCopying>
@property CPSPhoneType 			phoneType;
@property CPSShippingMethod 	shippingMethod;

- (NSArray *)validate;

@end
