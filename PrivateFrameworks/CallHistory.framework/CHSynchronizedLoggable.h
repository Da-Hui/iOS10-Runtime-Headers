/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol> {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}


- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (bool)shouldLogForLevel:(unsigned int)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (bool)executeSyncWithBOOL:(id)arg1;
- (id)executeSyncWithResult:(id)arg1;
- (void)executeSync:(id)arg1;
- (void)execute:(id)arg1;
- (id)queue;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;

@end