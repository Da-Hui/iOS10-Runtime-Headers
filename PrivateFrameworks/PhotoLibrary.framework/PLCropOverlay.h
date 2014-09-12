/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, PLCropOverlayCropView, PLContactPhotoOverlay, UILabel, UIButton, UIView, PLProgressHUD, NSString, PLCropOverlayBottomBar, CAMBottomBar, UIToolbar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlay : UIView  {
    id _delegate;
    PLCropOverlayCropView *_cropView;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _cropRect;
    UIToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    PLProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    unsigned int _previewMode : 1;
    unsigned int _cropRectIsVisible : 1;
    unsigned int _offsetStatusBar : 1;
    unsigned int _tookPhoto : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _controlsAreVisible : 1;
    unsigned int _isDisplayedInPopover : 1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
    bool_motionToggleIsOn;
    bool_isEditingHomeScreen;
    bool_isEditingLockScreen;
    PLContactPhotoOverlay *_contactPhotoOverlay;
    NSString *_defaultOKButtonTitle;
    PLCropOverlayBottomBar *__bottomBar;
    UIButton *__cameraCancelButton;
}

@property(readonly) PLContactPhotoOverlay * contactPhotoOverlay;
@property(retain) CAMBottomBar * cameraBottomBar;
@property(readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;
@property bool motionToggleIsOn;
@property bool isEditingHomeScreen;
@property bool isEditingLockScreen;
@property bool motionToggleHidden;
@property(copy) NSString * defaultOKButtonTitle;
@property bool previewMode;
@property(readonly) PLCropOverlayBottomBar * _bottomBar;
@property(readonly) UIButton * _cameraCancelButton;


- (void)setControlsAreVisible:(bool)arg1;
- (bool)controlsAreVisible;
- (id)_bottomBar;
- (void)_savePhotoFinished:(id)arg1;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;
- (id)_cameraCancelButton;
- (bool)isEditingLockScreen;
- (bool)isEditingHomeScreen;
- (bool)motionToggleIsOn;
- (void)setTitleHidden:(bool)arg1 animationDuration:(double)arg2;
- (void)setProgressDone;
- (void)removeProgress;
- (void)setShowProgress:(bool)arg1 title:(id)arg2;
- (void)setCancelButtonHidden:(bool)arg1;
- (void)setOKButtonShowsCamera:(bool)arg1;
- (void)setDefaultOKButtonTitle:(id)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setIsEditingLockScreen:(bool)arg1;
- (void)setIsEditingHomeScreen:(bool)arg1;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)didCaptureVideo;
- (void)didCapturePhoto;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bottomBarFrame;
- (id)bottomBar;
- (void)insertIrisView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (void)setOverlayContainerView:(id)arg1;
- (id)overlayContainerView;
- (void)_pauseButtonPressed:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (bool)isWallpaperUIMode:(int)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (bool)motionToggleHidden;
- (void)setMotionToggleHidden:(bool)arg1;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)setMotionToggleIsOn:(bool)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (id)defaultOKButtonTitle;
- (void)_updateMotionToggle;
- (void)_updateEditImageDoneButtonTitle;
- (void)_createCropView;
- (id)_irisView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2 offsettingStatusBar:(bool)arg3 isDisplayedInPopover:(bool)arg4;
- (void)setCropRectVisible:(bool)arg1 duration:(float)arg2;
- (void)setShowsCropRegion:(bool)arg1;
- (id)wallpaperBottomBar;
- (void)setCameraBottomBar:(id)arg1;
- (id)cameraBottomBar;
- (id)contactPhotoOverlay;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTitle;
- (void)statusBarHeightDidChange:(id)arg1;
- (void)_tappedBottomBarMotionToggle;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarPlaybackButton:(id)arg1;
- (void)_tappedBottomBarDoneButton:(id)arg1;
- (void)_tappedBottomBarCancelButton:(id)arg1;
- (bool)isTelephonyUIMode:(int)arg1;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(bool)arg2;
- (void)_updateToolbarItems:(bool)arg1;
- (bool)previewMode;
- (void)setPreviewMode:(bool)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_setMode:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (void)dismiss;
- (int)mode;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end