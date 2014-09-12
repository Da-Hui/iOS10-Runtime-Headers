/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    struct { 
        unsigned int sessionId : 1; 
    } _has;
}

@property bool hasSessionId;
@property struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property(readonly) bool hasSourceAppBundleId;
@property(retain) NSString * sourceAppBundleId;
@property(readonly) bool hasUriScheme;
@property(retain) NSString * uriScheme;


- (id)uriScheme;
- (id)sourceAppBundleId;
- (bool)hasUriScheme;
- (bool)hasSourceAppBundleId;
- (void)setUriScheme:(id)arg1;
- (void)setSourceAppBundleId:(id)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (bool)hasSessionId;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end