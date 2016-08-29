/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *object;
@property (nonatomic) long long type;

- (id)initWithObject:(id)arg1 type:(long long)arg2;
- (id)location;
- (id)name;
- (id)object;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end