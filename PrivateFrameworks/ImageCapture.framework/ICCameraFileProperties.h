/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableDictionary, NSMutableArray;

@interface ICCameraFileProperties : NSObject  {
    long long _fileSize;
    bool_hasThumbnail;
    bool_hasMetadata;
    bool_raw;
    int _fetchingThumbnailLock;
    bool_fetchingThumbnail;
    int _fetchingMetadataLock;
    bool_fetchingMetadata;
    struct CGImage { } *_originalThumbnail;
    struct CGImage { } *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned long long _orientation;
    bool_hasOverriddenOrientation;
    double _duration;
    NSString *_burstUUID;
    bool_burstFavorite;
    bool_burstPicked;
    bool_highFramerate;
    bool_timeLapse;
    NSMutableArray *_sidecarFiles;
}

@property long long fileSize;
@property bool hasThumbnail;
@property bool hasMetadata;
@property(getter=isRaw) bool raw;
@property bool fetchingThumbnail;
@property bool fetchingMetadata;
@property struct CGImage { }* originalThumbnail;
@property struct CGImage { }* thumbnail;
@property(retain) NSMutableDictionary * metadata;
@property(retain) NSMutableDictionary * metadata_hidden;
@property unsigned long long orientation;
@property bool hasOverriddenOrientation;
@property double duration;
@property(retain) NSMutableArray * sidecarFiles;
@property(retain) NSString * burstUUID;
@property bool burstFavorite;
@property bool burstPicked;
@property bool highFramerate;
@property bool timeLapse;


- (void)setTimeLapse:(bool)arg1;
- (bool)timeLapse;
- (void)setHighFramerate:(bool)arg1;
- (bool)highFramerate;
- (void)setBurstFavorite:(bool)arg1;
- (bool)burstFavorite;
- (void)setBurstPicked:(bool)arg1;
- (bool)burstPicked;
- (void)setBurstUUID:(id)arg1;
- (id)burstUUID;
- (void)setSidecarFiles:(id)arg1;
- (void)setHasOverriddenOrientation:(bool)arg1;
- (bool)hasOverriddenOrientation;
- (id)metadata_hidden;
- (void)setRaw:(bool)arg1;
- (bool)isRaw;
- (void)setHasMetadata:(bool)arg1;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (struct CGImage { }*)originalThumbnail;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOriginalThumbnail:(struct CGImage { }*)arg1;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (id)sidecarFiles;
- (void)setFileSize:(long long)arg1;
- (unsigned long long)orientation;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setDuration:(double)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (struct CGImage { }*)thumbnail;
- (long long)fileSize;
- (void)finalize;
- (void)dealloc;
- (bool)hasThumbnail;
- (double)duration;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (bool)hasMetadata;

@end