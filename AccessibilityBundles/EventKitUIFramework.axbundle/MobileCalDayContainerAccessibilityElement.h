/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
 */

@class NSDate, NSMutableArray;

@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement {
    NSMutableArray *_children;
    NSDate *_date;
    int _indexInArray;
}

@property(retain) NSMutableArray * children;
@property(retain) NSDate * date;
@property int indexInArray;

- (id)accessibilityContainerElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)children;
- (id)date;
- (void)dealloc;
- (int)indexInArray;
- (BOOL)isAccessibilityElement;
- (void)setChildren:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIndexInArray:(int)arg1;

@end