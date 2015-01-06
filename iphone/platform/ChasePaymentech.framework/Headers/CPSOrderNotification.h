//
//  CPSOrderNotification.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface CPSOrderNotification : NSObject<NSCopying>

@property (nonatomic, copy) NSArray *orderItems;
@property (nonatomic, copy) NSArray *taxes;

- (NSArray *)validate;

@end
