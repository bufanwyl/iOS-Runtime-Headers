/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {
    UIImageView *_backgroundGlow;
    id _delegate;
    UIColor *_dimmingColor;
    BOOL _displayed;
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    BOOL _ignoresTouches;
    BOOL _inPassthroughHitTest;
    NSArray *_passthroughViews;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    BOOL _suppressesBackdrops;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dimmingColor;
@property (nonatomic) BOOL displayed;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIBarButtonItem *highlightedBarButtonItem;
@property (nonatomic) BOOL ignoresTouches;
@property (nonatomic, retain) NSArray *passthroughViews;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBackdrops;

+ (id)defaultDimmingColor;

- (void).cxx_destruct;
- (id)_backdropViewsToAnimate;
- (void)_simulateTap;
- (void)dealloc;
- (id)delegate;
- (id)dimmingColor;
- (void)dimmingRemovalAnimationDidStop;
- (void)display:(BOOL)arg1;
- (void)display:(BOOL)arg1 withAnimationDuration:(float)arg2 afterDelay:(float)arg3;
- (BOOL)displayed;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (id)highlightedBarButtonItem;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)ignoresTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)passthroughViews;
- (void)setDelegate:(id)arg1;
- (void)setDimmingColor:(id)arg1;
- (void)setDisplayed:(BOOL)arg1;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (void)setIgnoresTouches:(BOOL)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setSuppressesBackdrops:(BOOL)arg1;
- (BOOL)suppressesBackdrops;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
