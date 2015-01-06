//
//  CPSReceiptRequest.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 6/23/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPSReceiptRequest : NSObject<NSCopying>

@property (nonatomic, copy) NSString *customerReceiptEmail;
@property (nonatomic, copy) NSString *customerReceiptPhone;
@property (nonatomic, copy) NSString *merchantReceiptEmail;
@property (nonatomic, copy) NSString *merchantReceiptPhone;

- (NSArray *)validate;

@end
