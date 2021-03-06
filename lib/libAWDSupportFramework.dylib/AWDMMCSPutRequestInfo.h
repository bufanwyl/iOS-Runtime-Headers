/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSPutRequestInfo : PBCodable <NSCopying> {
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSMutableArray *_chunkingInfos;
    int _chunksUploaded;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    long long _duration;
    NSMutableArray *_errors;
    struct { 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int chunksUploaded : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemsAlreadyPresentCount : 1; 
        unsigned int itemsNotPresentCount : 1; 
        unsigned int itemsPartiallyPresentCount : 1; 
        unsigned int requestErrorCode : 1; 
    } _has;
    int _itemCount;
    int _itemsAlreadyPresentCount;
    int _itemsNotPresentCount;
    int _itemsPartiallyPresentCount;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    long long _startTime;
    long long _timestamp;
}

@property (nonatomic, retain) NSMutableArray *authHttpInfos;
@property (nonatomic, retain) NSMutableArray *cancelErrors;
@property (nonatomic) int cancelledErrorCode;
@property (nonatomic, retain) NSString *cancelledErrorDomain;
@property (nonatomic, retain) NSMutableArray *chunkingInfos;
@property (nonatomic) int chunksUploaded;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, retain) NSMutableArray *completeHttpInfos;
@property (nonatomic, retain) NSMutableArray *containerHttpInfos;
@property (nonatomic) long long duration;
@property (nonatomic, retain) NSMutableArray *errors;
@property (nonatomic) BOOL hasCancelledErrorCode;
@property (nonatomic, readonly) BOOL hasCancelledErrorDomain;
@property (nonatomic) BOOL hasChunksUploaded;
@property (nonatomic, readonly) BOOL hasClientId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasItemCount;
@property (nonatomic) BOOL hasItemsAlreadyPresentCount;
@property (nonatomic) BOOL hasItemsNotPresentCount;
@property (nonatomic) BOOL hasItemsPartiallyPresentCount;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic, readonly) BOOL hasRequestErrorDomain;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int itemCount;
@property (nonatomic) int itemsAlreadyPresentCount;
@property (nonatomic) int itemsNotPresentCount;
@property (nonatomic) int itemsPartiallyPresentCount;
@property (nonatomic) int requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) long long startTime;
@property (nonatomic) long long timestamp;

+ (Class)authHttpInfosType;
+ (Class)cancelErrorType;
+ (Class)chunkingInfosType;
+ (Class)completeHttpInfosType;
+ (Class)containerHttpInfosType;
+ (Class)errorType;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addChunkingInfos:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (id)authHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned int)arg1;
- (id)cancelErrors;
- (unsigned int)cancelErrorsCount;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (id)chunkingInfos;
- (id)chunkingInfosAtIndex:(unsigned int)arg1;
- (unsigned int)chunkingInfosCount;
- (int)chunksUploaded;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearChunkingInfos;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)clientId;
- (id)completeHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)completeHttpInfosCount;
- (id)containerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (id)errorAtIndex:(unsigned int)arg1;
- (id)errors;
- (unsigned int)errorsCount;
- (BOOL)hasCancelledErrorCode;
- (BOOL)hasCancelledErrorDomain;
- (BOOL)hasChunksUploaded;
- (BOOL)hasClientId;
- (BOOL)hasDuration;
- (BOOL)hasItemCount;
- (BOOL)hasItemsAlreadyPresentCount;
- (BOOL)hasItemsNotPresentCount;
- (BOOL)hasItemsPartiallyPresentCount;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasStartTime;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)itemCount;
- (int)itemsAlreadyPresentCount;
- (int)itemsNotPresentCount;
- (int)itemsPartiallyPresentCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (void)setChunkingInfos:(id)arg1;
- (void)setChunksUploaded:(int)arg1;
- (void)setClientId:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasCancelledErrorCode:(BOOL)arg1;
- (void)setHasChunksUploaded:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasItemCount:(BOOL)arg1;
- (void)setHasItemsAlreadyPresentCount:(BOOL)arg1;
- (void)setHasItemsNotPresentCount:(BOOL)arg1;
- (void)setHasItemsPartiallyPresentCount:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemsAlreadyPresentCount:(int)arg1;
- (void)setItemsNotPresentCount:(int)arg1;
- (void)setItemsPartiallyPresentCount:(int)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)startTime;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
