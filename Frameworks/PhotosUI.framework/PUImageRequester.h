/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImageRequester : NSObject {
    long long  __changeCount;
    PUImageRequesterChange * __currentChange;
    int  __currentFullsizeJPEGRequestID;
    int  __currentImageRequestID;
    bool  __hasCurrentIncompleteRequest;
    bool  __hasRequestedFullsizeImageData;
    struct CGSize { 
        double width; 
        double height; 
    }  __lastRequestedImageSize;
    bool  __needsUpdate;
    NSHashTable * __observers;
    bool  __shouldUpdateImageOnCurrentRequestCompletion;
    <PUDisplayAsset> * _asset;
    NSData * _fullsizeImageData;
    UIImage * _image;
    bool  _imageIsFullQuality;
    bool  _imageIsPlaceholder;
    PUMediaProvider * _mediaProvider;
    bool  _networkAccessAllowed;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    bool  _useFullsizeImageData;
}

@property (setter=_setChangeCount:, nonatomic) long long _changeCount;
@property (setter=_setCurrentChange:, nonatomic, retain) PUImageRequesterChange *_currentChange;
@property (setter=_setCurrentFullsizeJPEGRequestID:, nonatomic) int _currentFullsizeJPEGRequestID;
@property (setter=_setCurrentImageRequestID:, nonatomic) int _currentImageRequestID;
@property (setter=_setCurrentIncompleteRequest:, nonatomic) bool _hasCurrentIncompleteRequest;
@property (setter=_setHasRequestedFullsizeJPEG:, nonatomic) bool _hasRequestedFullsizeImageData;
@property (setter=_setLastRequestedImageSize:, nonatomic) struct CGSize { double x1; double x2; } _lastRequestedImageSize;
@property (setter=_setNeedsUpdate:, nonatomic) bool _needsUpdate;
@property (setter=_setObserver:, nonatomic, retain) NSHashTable *_observers;
@property (setter=_setShouldUpdateImageOnCurrentRequestCompletion:, nonatomic) bool _shouldUpdateImageOnCurrentRequestCompletion;
@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (setter=_setFullsizeImageData:, nonatomic, retain) NSData *fullsizeImageData;
@property (setter=_setImage:, nonatomic, retain) UIImage *image;
@property (setter=_setImageIsFullQuality:, nonatomic) bool imageIsFullQuality;
@property (setter=_setImageIsPlaceholder:, nonatomic) bool imageIsPlaceholder;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) bool useFullsizeImageData;

- (void).cxx_destruct;
- (void)_assertInsideChangesBlock;
- (long long)_changeCount;
- (id)_currentChange;
- (int)_currentFullsizeJPEGRequestID;
- (int)_currentImageRequestID;
- (void)_didChange;
- (void)_handleResultOfFullsizeJPEGDataRequestWithID:(int)arg1 imageData:(id)arg2 dataUTI:(id)arg3 orientation:(long long)arg4 info:(id)arg5;
- (void)_handleResultOfImageRequestWithID:(int)arg1 image:(id)arg2 info:(id)arg3;
- (bool)_hasCurrentIncompleteRequest;
- (bool)_hasRequestedFullsizeImageData;
- (void)_invalidateImageRequest;
- (struct CGSize { double x1; double x2; })_lastRequestedImageSize;
- (bool)_needsUpdate;
- (id)_observers;
- (void)_publishChange:(id)arg1;
- (void)_setChangeCount:(long long)arg1;
- (void)_setCurrentChange:(id)arg1;
- (void)_setCurrentFullsizeJPEGRequestID:(int)arg1;
- (void)_setCurrentImageRequestID:(int)arg1;
- (void)_setCurrentIncompleteRequest:(bool)arg1;
- (void)_setFullsizeImageData:(id)arg1;
- (void)_setHasRequestedFullsizeJPEG:(bool)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageIsFullQuality:(bool)arg1;
- (void)_setImageIsPlaceholder:(bool)arg1;
- (void)_setLastRequestedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setNeedsUpdate:(bool)arg1;
- (void)_setObserver:(id)arg1;
- (void)_setShouldUpdateImageOnCurrentRequestCompletion:(bool)arg1;
- (bool)_shouldUpdateImageOnCurrentRequestCompletion;
- (void)_update;
- (void)_willChange;
- (id)asset;
- (void)cancelAllImageRequests;
- (id)fullsizeImageData;
- (void)handlePreloadedImage:(id)arg1;
- (id)image;
- (bool)imageIsFullQuality;
- (bool)imageIsPlaceholder;
- (id)init;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;
- (bool)isNetworkAccessAllowed;
- (id)mediaProvider;
- (void)performChanges:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseFullsizeImageData:(bool)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)unregisterObserver:(id)arg1;
- (void)updateIfNeeded;
- (bool)useFullsizeImageData;

@end
