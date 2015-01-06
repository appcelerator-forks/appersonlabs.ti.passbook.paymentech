//
//  CPSLevel2.h
//  ChasePaymentech
//
//  Created by Anil on 05/08/14.
//  Copyright (c) 2014 ChasePaymentech. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface CPSLevel2 : NSObject <NSCopying>

@property (nonatomic, copy) NSString *pcardPurchaseOrder;
@property (nonatomic, copy) NSString *pcardDestinationZip;

- (NSArray *)validate;
@end


