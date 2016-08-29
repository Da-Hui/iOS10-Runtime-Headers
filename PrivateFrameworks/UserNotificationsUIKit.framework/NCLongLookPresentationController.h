/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookPresentationController : UIPresentationController <NCLongLookAnimator> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    _UIBackdropView * _backgroundBlurView;
    UIView * _backgroundDarkeningView;
    bool  _didPlayDismissHaptic;
    UILabel * _dismissLabel;
    UIView * _dismissLabelContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _listenToKeyboardEvents;
    <NCLongLookPresentationControllerDelegate> * _longLookPresentationControllerDelegate;
    _UIBackdropViewSettings * _presentedBackgroundBlurSettings;
    bool  _presenting;
    UIView * _revealShortLook;
    UIView * _sourceView;
    UIViewController * _sourceViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewInitialFrame;
    <NCLongLookAnimatorDelegate> * _transitionAnimatorDelegate;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCLongLookPresentationControllerDelegate> *longLookPresentationControllerDelegate;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;
@property (nonatomic) <NCViewControllerAnimatedTransitioningDelegate> *transitionAnimatorDelegate;
@property (nonatomic, readonly) bool wantsInteractiveStart;

+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (bool)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (void)_animateDismissalToEdge:(unsigned long long)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_animatePreviewPresentation:(bool)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (id)_animationFactoryForLongLookPresentation:(bool)arg1;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetForPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForPresentedLongLookView:(struct UIView { Class x1; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_initialBackgroundBlurSettings;
- (bool)_isTransitionAnimated;
- (void)_popDismissLabel;
- (id)_presentedAnimatableBlurringView;
- (id)_presentedBackgroundBlurSettings;
- (id)_presentedNotificationViewController;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (bool)_shouldPresentInCurrentContext;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)cancelInteractiveTransition;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (bool)isCancelled;
- (bool)isPresenting;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)longLookPresentationControllerDelegate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setLongLookPresentationControllerDelegate:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setTransitionAnimatorDelegate:(id)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)startInteractiveTransition:(id)arg1;
- (id)transitionAnimatorDelegate;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end