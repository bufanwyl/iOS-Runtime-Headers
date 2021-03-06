/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessage : NSObject {
    NSString *_authToken;
    NSError *_error;
    NSString *_identifier;
    MSVMultiCallback *_messagePurgedCallbacks;
    MSVMultiCallback *_messageSentCallbacks;
    NSData *_protobufData;
    double _timestamp;
    PBCodable *_underlyingCodableMessage;
}

@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) MSVMultiCallback *messagePurgedCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *messageSentCallbacks;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) BOOL requiresAuthentication;
@property (nonatomic, readonly) BOOL shouldLog;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, retain) PBCodable *underlyingCodableMessage;

+ (id)protocolMessageWithProtobufData:(id)arg1;

- (id)authToken;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)identifier;
- (id)init;
- (id)initWithUnderlyingCodableMessage:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (id)messagePurgedCallbacks;
- (id)messageSentCallbacks;
- (unsigned int)priority;
- (id)protobufData;
- (BOOL)requiresAuthentication;
- (void)setAuthToken:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUnderlyingCodableMessage:(id)arg1;
- (BOOL)shouldLog;
- (double)timestamp;
- (unsigned int)type;
- (id)underlyingCodableMessage;

@end
