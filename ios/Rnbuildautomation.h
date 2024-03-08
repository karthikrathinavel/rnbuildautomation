
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnbuildautomationSpec.h"

@interface Rnbuildautomation : NSObject <NativeRnbuildautomationSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Rnbuildautomation : NSObject <RCTBridgeModule>
#endif

@end
