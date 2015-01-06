//
//  CPSAudit.h
//  ChasePaymentech
//
//  Created by Anil on 01/08/14.
//  Copyright (c) 2014 ChasePaymentech. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface CPSAudit : NSObject<NSCopying>

/**
 Set Vendor Id.(Optional)
 Maximum and Minimum length is 4.
 */
@property (nonatomic, copy) 		NSString *vendorID;

/**
 Set Software Id.(Optional)
 Maximum and Minimum length is 4.
 */
@property (nonatomic, copy) 		NSString *softwareID;

/**
 Set Mobiledevice Type.(Optional)
 Maximum and Minimum length is 2.
 */
@property (nonatomic) 				NSUInteger mobileDeviceType;


/* Not required properties */
//@property (nonatomic, copy) NSString *inAuthResult;
//@property (nonatomic, copy) NSString *sslValidationResult;
//@property (nonatomic, copy) 		NSString *politicalTimeZone;

- (NSArray *)validate;
@end


