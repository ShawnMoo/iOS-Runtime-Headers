/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableIndexSet, NSString, NSURL, SKUIItemArtworkContext, SKUISwooshView, SKUIVideoImageDataConsumer, UICollectionView;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        struct CGSize { 
            float width; 
            float height; 
        } iconSize; 
        struct CGSize { 
            float width; 
            float height; 
        } newsstandSize; 
        struct CGSize { 
            float width; 
            float height; 
        } newsstandSwooshSize; 
        struct CGSize { 
            float width; 
            float height; 
        } videoLockupIconSize; 
        struct CGSize { 
            float width; 
            float height; 
        } videoThumbnailSize; 
        float horizontalPadding; 
        float interItemSpacingMixed; 
        float interItemSpacingNewsstand; 
        float interItemSpacingVideoLockup; 
    SKUIItemArtworkContext *_artworkContext;
    UICollectionView *_collectionView;
    } _defaultLockupStyle;
    BOOL _delegateWantsWillDisplay;
    BOOL _didInitialReload;
    } _expectedImageSize;
    NSMutableIndexSet *_hiddenIconIndexSet;
    NSArray *_lockups;
    } _maxCellSize;
    } _maxImageSize;
    } _metrics;
    BOOL _seeAllHidden;
    int _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    int _swooshType;
    SKUISwooshView *_swooshView;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
}

@property(readonly) SKUIItemArtworkContext * artworkContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * items;
@property(copy) NSArray * lockups;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } seeAllButtonFrame;
@property(getter=isSeeAllHidden) BOOL seeAllHidden;
@property(readonly) NSURL * seeAllURL;
@property(readonly) Class superclass;
@property int swooshType;
@property(readonly) SKUIVideoImageDataConsumer * videoImageConsumer;

+ (int)_swooshTypeForLockups:(id)arg1;

- (void).cxx_destruct;
- (struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGSize { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; float x6; float x7; float x8; float x9; })_lockupSwooshMetrics;
- (struct CGSize { float x1; float x2; })_maximumCellSizeForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_newArtworkContextForSwooshType:(int)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (void)_reloadSizes;
- (void)_seeAllAction:(id)arg1;
- (void)_setExpectedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)artworkContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (void)deselectAllItems;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndex:(int)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithItemList:(id)arg1;
- (id)initWithSwoosh:(id)arg1;
- (BOOL)isSeeAllHidden;
- (id)items;
- (void)loadView;
- (id)lockups;
- (id)popImageViewForItemAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })seeAllButtonFrame;
- (id)seeAllURL;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setItemsWithLockups:(id)arg1;
- (void)setLockups:(id)arg1;
- (void)setSeeAllHidden:(BOOL)arg1;
- (void)setSwooshType:(int)arg1;
- (void)setVideoThumbnail:(id)arg1 forItemAtIndex:(int)arg2;
- (int)swooshType;
- (void)unhideImages;
- (id)videoImageConsumer;
- (void)viewWillAppear:(BOOL)arg1;

@end