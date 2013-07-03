/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {
    struct CGColor { } *_color;
    float _weight;
    struct CGSize { 
        float width; 
        float height; 
    } _offset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _concaveInsets;
}

@property struct CGSize { float x1; float x2; } offset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } concaveInsets;
@property(readonly) BOOL isValid;
@property(readonly) BOOL renderUnder;
@property(readonly) SEL renderSelector;
@property(readonly) struct CGColor { }* color;
@property float weight;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize { float x1; float x2; })arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 weight:(float)arg4;

- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })offset;
- (struct CGColor { }*)color;
- (BOOL)isValid;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })concaveInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (id)initWithColor:(id)arg1 offset:(struct CGSize { float x1; float x2; })arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 weight:(float)arg4;
- (void)setWeight:(float)arg1;
- (SEL)renderSelector;
- (BOOL)renderUnder;
- (float)weight;
- (void)setConcaveInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end