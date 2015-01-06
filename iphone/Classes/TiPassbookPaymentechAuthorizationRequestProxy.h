/**
 * ti.passbook.paymentech
 *
 * Created by Your Name
 * Copyright (c) 2014 Your Company. All rights reserved.
 */
#import "TiProxy.h"
#import <ChasePaymentech/ChasePaymentech.h>

@interface TiPassbookPaymentechAuthorizationRequestProxy : TiProxy
{
    CPSAuthorizationRequest * authRequest;
}

@property (nonatomic, retain) CPSAuthorizationRequest *authRequest;
@end
