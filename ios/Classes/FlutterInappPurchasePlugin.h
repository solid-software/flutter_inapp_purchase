#import <Flutter/Flutter.h>
#import <StoreKit/StoreKit.h>

@interface FlutterInappPurchasePlugin : NSObject<FlutterPlugin, SKProductsRequestDelegate, SKPaymentTransactionObserver>{
  NSMutableArray *validProducts;
}
@end
