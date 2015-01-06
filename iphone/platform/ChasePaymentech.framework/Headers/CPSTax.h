//
//  CPSTax.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPSTax : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *indicator;
@property (nonatomic) 		NSUInteger amount;
@property (nonatomic) 		NSUInteger percentage;

@end
