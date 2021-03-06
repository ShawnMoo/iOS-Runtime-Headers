/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewPrintPageHelper : NSObject <QLPrintingProtocol> {
    UIWebBrowserView * _browserView;
    NSString * _documentType;
    QLPreviewConverter * _previewConverter;
    struct CGSize { 
        float width; 
        float height; 
    }  _printableSize;
    NSURLRequest * _request;
}

@property (retain) QLPreviewConverter *previewConverter;
@property (nonatomic) struct CGSize { float x1; float x2; } printableSize;

+ (BOOL)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void).cxx_destruct;
- (void)_waitForPreview;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (int)numberOfPages;
- (void)numberOfPagesWithSize:(struct CGSize { float x1; float x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)pdfDataForPageAtIndex:(int)arg1;
- (void)pdfDataForPageAtIndex:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)previewConverter;
- (struct CGSize { float x1; float x2; })printableSize;
- (void)setPreviewConverter:(id)arg1;
- (void)setPrintableSize:(struct CGSize { float x1; float x2; })arg1;

@end
