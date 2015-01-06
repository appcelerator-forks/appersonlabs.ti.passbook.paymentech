var Passbook = require("ti.passbook");
var Paymentech = require("ti.passbook.paymentech");


Paymentech.createGateway();

//$.win.open();
var paymentData = {
    merchantIdentifier: 'com.something.themerchantid',
    merchantCapabilities: Passbook.MERCHANT_CAPABILITY_3DS | Passbook.MERCHANT_CAPABILITY_EMV,
    supportedNetworks: [
        Passbook.PAYMENT_NETWORK_TYPE_MASTERCARD,
        Passbook.PAYMENT_NETWORK_TYPE_VISA,
    ],
    countryCode: 'US',
    currencyCode: 'USD',
    paymentSummaryItems: [{
        label: 'My Item 1',
        amount: 10.99
    }, {
        label: 'My Item 2',
        amount: 3.89
    }, ],
    shippingMethods: [{
        identifier: 'USPS_FIRST',
        label: 'USPS First Class',
        detail: 'Free Shipping',
        amount: 8.61
    }, {
        identifier: 'UPS_GROUND',
        label: 'UPS Ground',
        detail: 'Faster than free',
        amount: 11.54
    }, {
        identifier: 'FEDEX',
        label: 'FedEx Overnight',
        detail: 'Get it tomorrow',
        amount: 21.92
    }, ],
    requiredBillingAddressFields: Passbook.ADDRESS_FIELD_ALL,
    requiredShippingAddressFields: Passbook.ADDRESS_FIELD_POSTAL_ADDRESS |
        Passbook.ADDRESS_FIELD_EMAIL,
    billingAddress: {
        firstName: 'Joe',
        lastName: 'Blow',
        address: {
            home: [{
                street: '1234 Main',
                City: 'Hershey',
                State: 'PA',
                Zip: '12345',
                Country: 'US',
                CountryCode: 'US',
            }]
        },
        email: {
            work: ['test@nowhere.com']
        },
        phone: {
            home: ['123-123-1234']
        },
    },
    shippingAddress: {
        firstName: 'Joe',
        lastName: 'Blow',
        address: {
            home: [{
                street: '1234 Main',
                City: 'Hershey',
                State: 'PA',
                Zip: '12345',
                Country: 'US',
                CountryCode: 'US',
            }]
        },
        email: {
            work: ['test@nowhere.com']
        },
        phone: {
            home: ['123-123-1234']
        },
    },


    applicationData: {
        customID: 1234,
        moreCustomData: 'asdf',
    }
};

var auth = Passbook.createPaymentAuthorizationView(paymentData);

auth.addEventListener('shippingMethodSelected', function(e) {
    // here you would add a shipping charge now that address & methods are chosen
    paymentData.paymentSummaryItems.push({
        label: e.shippingMethod.label,
        amount: e.shippingMethod.amount
    });
    auth.paymentSummaryItems = paymentData.paymentSummaryItems;
});

auth.addEventListener('shippingAddressSelected', function(e) {
    // here you would update shipping options & pricing based on address
    // e.shippingAddress
    paymentData.shippingMethods = [{
        identifier: 'USPS_FIRST',
        label: 'USPS First Class',
        detail: 'Free Shipping',
        amount: 18.61
    }, {
        identifier: 'UPS_GROUND',
        label: 'UPS Ground',
        detail: 'Faster than free',
        amount: 21.54
    }, {
        identifier: 'FEDEX',
        label: 'FedEx Overnight',
        detail: 'Get it tomorrow',
        amount: 41.92
    }, ];
    auth.shippingMethods = paymentData.shippingMethods;
});

auth.addEventListener('paymentAuthorized', function(e) {
    // e.completion  auth status
    if (e.completion != Payment.PAYMENT_AUTH_STATUS_SUCCESS) {
        alert('oops');
    }

    // e.payment.paymentData gets passed to the processor SDK
});
alert(auth.dog);
auth.show();
