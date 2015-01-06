//
//  CPSOrderItem.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPSOrderItem : NSObject

@property (nonatomic, copy) NSString *name;
//@property (nonatomic) NSInteger quantity;
@property (nonatomic, copy) NSString *quantity; // why did mPhasis make this a string?
@property (nonatomic) 		 NSUInteger price;
@property (nonatomic) 		 NSUInteger totalAmount;
@property (nonatomic) 		 NSUInteger discount;
@property (nonatomic, copy) NSString *taxIndicator;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *catalogId;


@end
