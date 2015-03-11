/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHAsset, PHContentEditingOutput, PLPhotoEditModel;

@interface PUPhotoEditSaveRequest : NSObject {
    double _beginTimestamp;
    id _completionHandler;
    PHContentEditingOutput *_contentEditingOutput;
    int _currentState;
    PLPhotoEditModel *_editModel;
    PHAsset *_photo;
    int _workImageVersion;
}

@property(readonly) PHContentEditingOutput * contentEditingOutput;
@property(readonly) int currentState;
@property(copy,readonly) PLPhotoEditModel * editModel;
@property(readonly) PHAsset * photo;
@property(readonly) int workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)arg1;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (void)_renderAndSaveBaseImage:(id)arg1 withOrientation:(int)arg2 baseImageURL:(id)arg3;
- (void)_transitionToState:(int)arg1;
- (void)beginSaveOperationWithCompletionHandler:(id)arg1;
- (void)cancelSaveOperation;
- (id)contentEditingOutput;
- (int)currentState;
- (id)editModel;
- (id)init;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(int)arg3;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(int)arg4;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(int)arg3;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)photo;
- (int)workImageVersion;

@end