//
//  CPSBillingAddress.h
//  ChasePaymentech
//
//  Created by Anil on 04/08/14.
//  Copyright (c) 2014 ChasePaymentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CPSConstants.h"
#import "CPSAddress.h"

@interface CPSBillingAddress : CPSAddress<NSCopying>


@property CPSPhoneType phoneType;

- (NSArray *)validate;

@end
