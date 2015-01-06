/**
 * ti.passbook.paymentech
 *
 * Created by Your Name
 * Copyright (c) 2014 Your Company. All rights reserved.
 */

#import "TiProxy.h"
#import <ChasePaymentech/ChasePaymentech.h>

@interface TiPassbookPaymentechGatewayProxy : TiProxy
{
    CPSGateway *gateway;
    KrollCallback *authCallback;

}

@property (nonatomic, retain) CPSGateway *gateway;

@end
