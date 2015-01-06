//
//  CPSConstants.h
//  ChasePaymentech
//
//  Created by Anil on 06/08/14.
//  Copyright (c) 2014 Chase Paymentech. All rights reserved.
//

#ifndef ChasePaymentech_CPSConstants_h
#define ChasePaymentech_CPSConstants_h

static NSString *const CPSChaseDomain = @"com.chaseDomain.com";

//Max Min Length Constants
#define MIN_LENGTH_ORDERID 1
#define MAX_LENGTH_ORDERID 22

#define MIN_LENGTH_DISCOUNTAMT 1
#define MAX_LENGTH_DISCOUNTAMT 8

#define MIN_LENGTH_TIPAMT 1
#define MAX_LENGTH_TIPAMT 8

#define MIN_LENGTH_TAXAMT 1
#define MAX_LENGTH_TAXAMT 8

#define MIN_LENGTH_SURCHARGEAMT 1
#define MAX_LENGTH_SURCHARGEAMT 8

#define MIN_LENGTH_COMMENTS 0
#define MAX_LENGTH_COMMENTS 64


#define MIN_LENGTH_CARDINDICATOR 0
#define MAX_LENGTH_CARDINDICATOR 1

#define MIN_LENGTH_RECURRINGIND 2
#define MAX_LENGTH_RECURRINGIND 2

#define MIN_LENGTH_PARTIALAUTHIND 1
#define MAX_LENGTH_PARTIALAUTHIND 1


#define MIN_LENGTH_LATITUDE_LONGITUDE 23
#define MAX_LENGTH_LATITUDE_LONGITUDE 23

#define MIN_LENGTH_POLITICAL_TIME_ZONE 5
#define MAX_LENGTH_POLITICAL_TIME_ZONE 5

#define MIN_LENGTH_VENDOR_ID 4
#define MAX_LENGTH_VENDOR_ID 4

#define MIN_LENGTH_SOFTWAREID 4
#define MAX_LENGTH_SOFTWAREID 4

#define MIN_LENGTH_MOBILEDEVICETYPE 2
#define MAX_LENGTH_MOBILEDEVICETYPE 2
#define MAX_LENGTH_RECEIPT_EMAIL 50
#define MAX_LENGTH_PHONE_NUMBER 10

#define MAX_LENGTH_ORDER_ITEMNAME 80
#define MAX_LENGTH_ORDER_ITEMQTY 13
#define MAX_LENGTH_ORDERITEM_PRICE 8
#define MAX_LENGTH_ORDERITEM_TOTALAMT 8
#define MAX_LENGTH_ORDERITEM_DISCOUNT 8
#define MAX_LENGTH_ORDERITEM_TAX_INDICATOR 6
#define MAX_LENGTH_ORDERITEM_ID 10


#define MAX_LENGTH_TAX_NAME 20
#define MAX_LENGTH_TAX_INDICATOR 6
#define MAX_LENGTH_TAX_AMOUNT 12
#define MAX_LENGTH_TAX_PERCENTAGE 12

#define MAX_LENGTH_SHIPADDRESS_NAME 30
#define MAX_LENGTH_SHIPADDRESS_ADDRESS1 30
#define MAX_LENGTH_SHIPADDRESS_ADDRESS2 30
#define MAX_LENGTH_SHIPADDRESS_CITY 20
#define MAX_LENGTH_SHIPADDRESS_STATE 2
#define MAX_LENGTH_SHIPADDRESS_POSTALCODE 10
#define MAX_LENGTH_SHIPADDRESS_COUNTRYCODE 2
#define MAX_LENGTH_SHIPADDRESS_PHONENUMBER 14

#define MAX_LENGTH_BILLADDRESS_NAME 30
#define MAX_LENGTH_BILLADDRESS_ADDRESS1 30
#define MAX_LENGTH_BILLADDRESS_ADDRESS2 30
#define MAX_LENGTH_BILLADDRESS_CITY 20
#define MAX_LENGTH_BILLADDRESS_STATE 2
#define MAX_LENGTH_BILLADDRESS_POSTALCODE 10
#define MAX_LENGTH_BILLADDRESS_COUNTRYCODE 2
#define MAX_LENGTH_BILLADDRESS_PHONENUMBER 14

#define MAX_LENGTH_LEVEL2_PCARDPURCHASE 17
#define MAX_LENGTH_LEVEL2_PCARDDEST 10


//Max Min Values.

#define MIN_VALUE_DISCOUNTAMT 1
#define MAX_VALUE_DISCOUNTAMT 99999999

#define MIN_VALUE_TIPAMT 1
#define MAX_VALUE_TIPAMT 99999999

#define MIN_VALUE_TAXAMT 1
#define MAX_VALUE_TAXAMT 99999999

#define MIN_VALUE_SURCHARGEAMT 1
#define MAX_VALUE_SURCHARGEAMT 99999999


typedef NS_ENUM(NSUInteger, CPSRecurringInd) {
	 CPSRecurringIndNone,
	 CPSRecurringIndRecurringFirst,
	 CPSRecurringIndRecurringSubsequent
};

typedef NS_ENUM(NSUInteger, CPSPartialAuthInd) {
	 CPSPartialAuthIndNone,
	 CPSPartialAuthIndSupport,
	 CPSPartialAuthIndNotToSupport,
	 CPSPartialAuthIndOveride
};

typedef NS_ENUM(NSUInteger, CPSCardIndicators) {
	 CPSCardIndicatorsNone,
	 CPSCardIndicatorsYes,
	 CPSCardIndicatorsNo
};



typedef NS_ENUM(NSUInteger, CPSPhoneType) {
    CPSPhoneTypeNone,
	 CPSPhoneTypeDay,
    CPSPhoneTypeHome,
    CPSPhoneTypeNight,
    CPSPhoneTypeWork,
};


typedef NS_ENUM(NSUInteger, CPSShippingMethod) {
    CPSShippingMethodNone,
    CPSShippingMethodLowerCost,
    CPSShippingMethodCarrierDesignatedByCustomer,
    CPSShippingMethodElectronicDelivery,
    CPSShippingMethodGround,
    CPSShippingMethodInternational,
    CPSShippingMethodMilitary,
    CPSShippingMethodNextDayOrOvernight,
    CPSShippingMethodOther,
    CPSShippingMethodStorePickup,
    CPSShippingMethodSameDay,
    CPSShippingMethodTwoDayService,
    CPSShippingMethodThreeDayService
};

typedef NS_ENUM(NSUInteger, CPSAuthorizationError) {
    CPSAuthorizationErrorOrderIdMandatory=5001,
    CPSAuthorizationErrorOrderIdOutOfRange,
    CPSAuthorizationErrorOrderIdNotAlphaNumeric,
    CPSAuthorizationErrorDiscountOutOfRange,
    CPSAuthorizationErrorTipAmountOutOfRange,
    CPSAuthorizationErrorTaxAmountOutOfRange,
    CPSAuthorizationErrorSurchargeAmountOutOfRange,
    CPSAuthorizationErrorCommentsLengthOutOfRange,
    CPSAuthorizationErrorCardIndicatorOutOfRange,
    CPSAuthorizationErrorRecurringIdOutOfRange,
    CPSAuthorizationErrorPartialAuthOutOfRange,
    CPSAuthorizationErrorAuditMandatory,
    CPSAuthorizationErrorPaymentDataMandatory,
	 CPSAuthorizationErrorCommentsInvalid
    
};




typedef NS_ENUM(NSUInteger, CPSAuditError) {
    CPSAuditErrorLatitudeLongitudeMandatory=5014,
    CPSAuditErrorLatitudeLongitudeOutOfRange,
    CPSAuditErrorVendorIdOutOfRange,
    CPSAuditErrorSoftwareIdOutOfRange,
    CPSAuditErrorMobileDeviceTypeOutOfRange,
    CPSAuditErrorInvalidObject
};





typedef NS_ENUM(NSUInteger, CPSReceiptError) {
    CPSReceiptErrorNullEmailId=5020,
    CPSReceiptErrorEmailFormatInvalid,
    CPSReceiptErrorEmailEmailIdOutOfRange,
    CPSReceiptErrorNullPhoneNumber,
    CPSReceiptErrorInvalidPhoneNumber,
    CPSReceiptErrorPhoneNumberOutOfRange,
    CPSReceiptErrorInvalidObject
};
//CPSREceipt Request constants


typedef NS_ENUM(NSUInteger, CPSOrderNotificationError) {
    CPSOrderNotificationErrorOrderIdMandatory=5027,
    CPSOrderNotificationErrorOrderNameOutOfRange,
    CPSOrderNotificationErrorQuantityMandatory,
    CPSOrderNotificationErrorQuantityOutOfRange,
    CPSOrderNotificationErrorPriceMandatory,
    CPSOrderNotificationErrorPriceOutOfRangeuserInfo,
    CPSOrderNotificationErrorTotalAmountMandatory,
    CPSOrderNotificationErrorTotalAmountOutOfRange,
    CPSOrderNotificationErrorDiscountOutOfRange,
    CPSOrderNotificationErrorOrderIdOutOfRange,
    CPSOrderNotificationErrorOrderItemTaxIndicatorOutOfRange,
    CPSOrderNotificationErrorNotOfTypeOrderId,
    CPSOrderNotificationErrorInvalidObject,
    
    
    CPSOrderNotificationErrorTaxItemNameMandatory,
    CPSOrderNotificationErrorTaxItemNameOutOfRange,
    CPSOrderNotificationErrorTaxIndicatorOutOfRange,
    CPSOrderNotificationErrorTaxAmountMandatory,
    CPSOrderNotificationErrorTaxAmountOutOfRange,
    CPSOrderNotificationErrorTaxPercentageMandatory,
    CPSOrderNotificationErrorTaxPercentageOutOfRange,
    CPSOrderNotificationErrorNotOfTypeCPSTax,
};




typedef NS_ENUM(NSUInteger, CPSLevelTwoError) {
    CPSLevelTwoPurchaseOrderMandatory=5048,
    CPSLevelTwoPurchaseOrderOutOfRange,
    CPSLevelTwoPurchaseOrderAlphaNumeric,
    CPSLevelTwoDestinationZipMandatory,
    CPSLevelTwoDestinationZipOutOfRange,
    CPSLevelTwoDestinationZipAlphaNumeric,
    CPSLevelErrorInvalidObject
};




typedef NS_ENUM(NSUInteger, CPSShippingAddressError) {
    CPSShippingAddressNameOutOfRange=5055,
    CPSShippingAddressOneOutOfRange,
    CPSShippingAddressTwoOutOfRange,
    CPSShippingAddressCityOutOfRange,
    CPSShippingAddressStateOutOfRange,
    CPSShippingAddressPostalCodeNull,
    CPSShippingAddressPostalCodeOutOfRange,
    CPSShippingAddressCountryCodeOutOfRange,
    CPSShippingAddressInvalidPhoneNumberFormat,
    CPSShippingAddressPhoneNumberOutOfRange,
    CPSShippingAddressPhoneTypeOutOfRange,
    CPSShippingAddressShippingMethodOutOfRange,
    CPSShippingAddressErrorInvalidObject
};



typedef NS_ENUM(NSUInteger, CPSBillingAddressError) {
    CPSBillingAddressNameOutOfRange=5068,
    CPSBillingAddressOneOutOfRange,
    CPSBillingAddressTwoOutOfRange,
    CPSBillingAddressCityOutOfRange,
    CPSBillingAddressStateOutOfRange,
    CPSBillingAddressPostalCodeNull,
    CPSBillingAddressPostalCodeOutOfRange,
    CPSBillingAddressCountryCodeOutOfRange,
    CPSBillingAddressInvalidPhoneNumberFormat,
    CPSBillingAddressPhoneNumberOutOfRange,
    CPSBillingAddressPhoneTypeOutOfRange,
    CPSBillingAddressErrorInvalidObject
};





typedef NS_ENUM(NSUInteger, CPSError) {
		CPSErrorLocationManagerRestricted = 5080,
	 	CPSErrorLocationManagerDenied,
	 	CPSErrorValidationFailed,
		CPSErrorParserFailed,
	 	CPSErrorSSLFailed,
	   CPSErrorConnectivityNotAvailable
};


#endif
