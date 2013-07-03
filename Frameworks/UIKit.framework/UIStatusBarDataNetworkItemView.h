/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView  {
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)_dataNetworkImage;
- (id)_stringForRSSI;
- (float)maximumOverlap;
- (float)extraLeftPadding;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end