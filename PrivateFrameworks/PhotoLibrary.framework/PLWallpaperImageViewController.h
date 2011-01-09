/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWallpaperNavigationItem, NSString, NSArray, UIActionSheet;



@interface PLWallpaperImageViewController : PLUIEditImageViewController <UIActionSheetDelegate>
{
    PLWallpaperNavigationItem *_navItem;
    NSInteger _wallpaperMode;
    NSArray *_navigationToolbarItems;
    BOOL _saveWallpaperData;
    NSString *_wallpaperTitle;
    UIActionSheet *_wallpaperOptionsSheet;
    unsigned int _didSetImageMode : 1;
}

@property(copy) NSString *wallpaperTitle;
@property BOOL saveWallpaperData;

+ (id)argsForSavingWallpaperFromTile:(id)arg1 mode:(NSInteger)arg2;
+ (void)setWallpaperFromArgs:(id)arg1;

- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)navigationItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithUIImage:(id)arg1;
- (void)_adjustScrollViewGeometry;
- (void)_savePhoto;
- (void)_backgroundCropWallpaper:(id)arg1;
- (void)_cropWallpaperFinished:(id)arg1;
- (id)wallpaperTitle;
- (void)setWallpaperTitle:(id)arg1;
- (BOOL)saveWallpaperData;
- (void)setSaveWallpaperData:(BOOL)arg1;
- (BOOL)uiipc_useTelephonyUI;
- (NSInteger)cropOverlayMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewFrame;
- (NSUInteger)_contentAutoresizingMask;
- (NSUInteger)_tileAutoresizingMask;
- (BOOL)clientIsWallpaper;
- (void)setupNavigationItem;
- (void)_updateTitles;
- (NSInteger)imageFormat;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_setImageAsHomeScreenClicked:(id)arg1;
- (void)_setImageAsLockScreenClicked:(id)arg1;
- (void)_setImageAsHomeScreenAndLockScreenClicked:(id)arg1;

@end