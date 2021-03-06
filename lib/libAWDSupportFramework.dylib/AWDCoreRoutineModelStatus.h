/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelStatus : PBCodable <NSCopying> {
    BOOL _enabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int enabled : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (BOOL)hasEnabled;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasEnabled:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
