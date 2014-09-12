/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITextView, <PLPhotoCommentEntryViewDelegate>, NSString, UILabel, UIButton;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {
    UILabel *placeholderLabel;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIButton *_postButton;
    <PLPhotoCommentEntryViewDelegate> *_delegate;
}

@property(retain,readonly) UITextView * textView;
@property(retain,readonly) UILabel * placeholderLabel;
@property(retain,readonly) UIButton * postButton;
@property <PLPhotoCommentEntryViewDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)trimmedText;
- (id)postButton;
- (double)preferredHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textView;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)placeholderLabel;
- (void)textViewDidChange:(id)arg1;
- (void)clearText;
- (void)layoutSubviews;

@end