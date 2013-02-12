/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUCompletionTableDelegate>, NSString;

@interface SUCompletionTableViewController : SUTableViewController {
    NSInteger _assetTypesForSearchParameters;
    <SUCompletionTableDelegate> *_delegate;
    NSString *_stringToComplete;
    NSString *_urlBagKey;
}

@property(retain) NSString *urlBagKey; /* unknown property attribute: V_urlBagKey */
@property(retain) NSString *stringToComplete; /* unknown property attribute: V_stringToComplete */
@property <SUCompletionTableDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger assetTypesForSearchParameters; /* unknown property attribute: V_assetTypesForSearchParameters */

- (void)_dismissWithPickedItem:(id)arg1;
- (void)_fetchCompletions;
- (NSInteger)assetTypesForSearchParameters;
- (void)dealloc;
- (id)delegate;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (id)init;
- (void)loadView;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setAssetTypesForSearchParameters:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStringToComplete:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (id)stringToComplete;
- (id)urlBagKey;
- (void)viewWillAppear:(BOOL)arg1;

@end