//
//  CPSDecryptionRequest.h
//  ChasePaymentech
//
//  Created by Yoder, Ryan on 8/25/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPSDecryptionRequest : NSObject

@property (nonatomic, copy) NSString *encryptedData;
@property (nonatomic, copy) NSString *encryptedKey;
@property (nonatomic, copy) NSString *format;
@property (nonatomic, copy) NSString *latitudeLongitude;

@end