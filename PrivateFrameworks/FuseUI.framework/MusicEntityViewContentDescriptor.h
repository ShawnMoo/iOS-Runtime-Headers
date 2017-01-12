/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewContentDescriptor : NSObject <NSCopying> {
    NSSet * _allPropertiesToLoadAsynchronously;
    NSSet * _allPropertiesToPrefetchSynchronously;
    BOOL  _allowsDeletionWithoutEditingMode;
    MusicEntityViewContentArtworkDescriptor * _artworkDescriptor;
    int  _artworkVerticalAlignment;
    UIColor * _backgroundColor;
    UIColor * _customSelectionTintColor;
    UIColor * _customSeparatorColor;
    UIColor * _downloadProgressButtonTintColor;
    NSString * _explicitBadgeProperty;
    BOOL  _hasValidAllPropertiesToLoadAsynchronously;
    BOOL  _leftSeparatorInsetFollowsText;
    Class  _lockupViewClass;
    float  _minimumHeight;
    float  _popularityIndicatorThreshold;
    UIColor * _popularityIndicatorTintColor;
    int  _selectionStyle;
    BOOL  _shouldDisableWhenUnplayable;
    BOOL  _shouldDisplayProminently;
    BOOL  _shouldForceBottomSeparatorVisible;
    NSString * _storeDownloadIDProperty;
    NSString * _storeOffersProperty;
    int  _textDescriptorVerticalAlignment;
    NSArray * _textDescriptors;
    NSCountedSet * _textDescriptorsBeingObserved;
    NSString * _wantsAddButtonProperty;
    NSString * _wantsBuyButtonProperty;
    NSString * _wantsContextualActionsButtonProperty;
    NSString * _wantsDisclosureIndicatorProperty;
    BOOL  _wantsDownloadProgress;
    NSString * _wantsPlayButtonProperty;
    BOOL  _wantsPopularityIndicator;
}

@property (nonatomic, readonly) NSSet *allPropertiesToLoadAsynchronously;
@property (nonatomic, readonly) NSSet *allPropertiesToPrefetchSynchronously;
@property (nonatomic) BOOL allowsDeletionWithoutEditingMode;
@property (nonatomic, retain) MusicEntityViewContentArtworkDescriptor *artworkDescriptor;
@property (nonatomic) int artworkVerticalAlignment;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *customSelectionTintColor;
@property (nonatomic, retain) UIColor *customSeparatorColor;
@property (nonatomic, retain) UIColor *downloadProgressButtonTintColor;
@property (nonatomic, copy) NSString *explicitBadgeProperty;
@property (nonatomic) BOOL leftSeparatorInsetFollowsText;
@property (nonatomic, retain) Class lockupViewClass;
@property (nonatomic) float minimumHeight;
@property (nonatomic) float popularityIndicatorThreshold;
@property (nonatomic, retain) UIColor *popularityIndicatorTintColor;
@property (nonatomic) int selectionStyle;
@property (nonatomic) BOOL shouldDisableWhenUnplayable;
@property (nonatomic) BOOL shouldDisplayProminently;
@property (nonatomic) BOOL shouldForceBottomSeparatorVisible;
@property (nonatomic, copy) NSString *storeDownloadIDProperty;
@property (nonatomic, copy) NSString *storeOffersProperty;
@property (nonatomic) int textDescriptorVerticalAlignment;
@property (nonatomic, copy) NSArray *textDescriptors;
@property (nonatomic, copy) NSString *wantsAddButtonProperty;
@property (nonatomic, copy) NSString *wantsBuyButtonProperty;
@property (nonatomic, copy) NSString *wantsContextualActionsButtonProperty;
@property (nonatomic, copy) NSString *wantsDisclosureIndicatorProperty;
@property (nonatomic) BOOL wantsDownloadProgress;
@property (nonatomic, copy) NSString *wantsPlayButtonProperty;
@property (nonatomic) BOOL wantsPopularityIndicator;

+ (Class)tableViewCellClass;
+ (id)tableViewCellReuseIdentifier;
+ (Class)tableViewSectionHeaderClass;
+ (id)tableViewSectionHeaderReuseIdentifier;

- (void).cxx_destruct;
- (void)_handleArtworkDescriptorDidInvalidateNotification:(id)arg1;
- (void)_handleTextDescriptorDidInvalidateNotification:(id)arg1;
- (void)_invalidateAllPropertiesToLoadAsynchronously;
- (void)_invalidateAllPropertiesToPrefetchSynchronously;
- (id)allPropertiesToLoadAsynchronously;
- (id)allPropertiesToPrefetchSynchronously;
- (BOOL)allowsDeletionWithoutEditingMode;
- (id)artworkDescriptor;
- (int)artworkVerticalAlignment;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customSelectionTintColor;
- (id)customSeparatorColor;
- (void)dealloc;
- (id)downloadProgressButtonTintColor;
- (id)explicitBadgeProperty;
- (id)init;
- (BOOL)leftSeparatorInsetFollowsText;
- (Class)lockupViewClass;
- (float)minimumHeight;
- (float)popularityIndicatorThreshold;
- (id)popularityIndicatorTintColor;
- (int)selectionStyle;
- (void)setAllowsDeletionWithoutEditingMode:(BOOL)arg1;
- (void)setArtworkDescriptor:(id)arg1;
- (void)setArtworkVerticalAlignment:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCustomSelectionTintColor:(id)arg1;
- (void)setCustomSeparatorColor:(id)arg1;
- (void)setDownloadProgressButtonTintColor:(id)arg1;
- (void)setExplicitBadgeProperty:(id)arg1;
- (void)setLeftSeparatorInsetFollowsText:(BOOL)arg1;
- (void)setLockupViewClass:(Class)arg1;
- (void)setMinimumHeight:(float)arg1;
- (void)setPopularityIndicatorThreshold:(float)arg1;
- (void)setPopularityIndicatorTintColor:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setShouldDisableWhenUnplayable:(BOOL)arg1;
- (void)setShouldDisplayProminently:(BOOL)arg1;
- (void)setShouldForceBottomSeparatorVisible:(BOOL)arg1;
- (void)setStoreDownloadIDProperty:(id)arg1;
- (void)setStoreOffersProperty:(id)arg1;
- (void)setTextDescriptorVerticalAlignment:(int)arg1;
- (void)setTextDescriptors:(id)arg1;
- (void)setWantsAddButtonProperty:(id)arg1;
- (void)setWantsBuyButtonProperty:(id)arg1;
- (void)setWantsContextualActionsButtonProperty:(id)arg1;
- (void)setWantsDisclosureIndicatorProperty:(id)arg1;
- (void)setWantsDownloadProgress:(BOOL)arg1;
- (void)setWantsPlayButtonProperty:(id)arg1;
- (void)setWantsPopularityIndicator:(BOOL)arg1;
- (BOOL)shouldDisableWhenUnplayable;
- (BOOL)shouldDisplayProminently;
- (BOOL)shouldForceBottomSeparatorVisible;
- (id)storeDownloadIDProperty;
- (id)storeOffersProperty;
- (id)textDescriptorForTag:(int)arg1;
- (int)textDescriptorVerticalAlignment;
- (id)textDescriptors;
- (void)updateTextDescriptorsForPreferredContentSizeChange;
- (void)updateTextDescriptorsWithDisplayScale:(float)arg1;
- (void)updateTextDescriptorsWithTintColor:(id)arg1;
- (id)wantsAddButtonProperty;
- (id)wantsBuyButtonProperty;
- (id)wantsContextualActionsButtonProperty;
- (id)wantsDisclosureIndicatorProperty;
- (BOOL)wantsDownloadProgress;
- (id)wantsPlayButtonProperty;
- (BOOL)wantsPopularityIndicator;
- (void)willAddTextDescriptor:(id)arg1;
- (void)willRemoveTextDescriptor:(id)arg1;

@end