/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoEditScrubberImageSource : NSObject {
    NSMutableDictionary *_cachedImages;
    AVAssetImageGenerator *_imageGenerator;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    struct CGSize { 
        float width; 
        float height; 
    } _maximumThumbnailSize;
    NSMutableArray *_pendingTimestampRequests;
    NSMutableDictionary *_requestCompletionHandlers;
}

@property (nonatomic) struct CGSize { float x1; float x2; } maximumThumbnailSize;

- (void).cxx_destruct;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumThumbnailSize;
- (void)processPendingThumbnailRequests;
- (void)setMaximumThumbnailSize:(struct CGSize { float x1; float x2; })arg1;

@end
