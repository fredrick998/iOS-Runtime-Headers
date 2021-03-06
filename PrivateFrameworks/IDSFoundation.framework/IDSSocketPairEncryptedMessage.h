/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {
    NSData * _data;
}

@property (nonatomic, readonly, retain) NSData *data;

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithData:(id)arg1;

@end
