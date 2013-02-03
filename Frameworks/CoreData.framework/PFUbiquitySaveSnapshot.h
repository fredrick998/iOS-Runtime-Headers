/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSDate, NSMutableDictionary;

@interface PFUbiquitySaveSnapshot : NSObject {
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
    NSDate *_transactionDate;
}

@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * localPeerID;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSArray * storeNames;
@property(retain) NSDate * transactionDate;

- (void)dealloc;
- (id)description;
- (id)exportingPeerID;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)initWithTransactionLog:(id)arg1;
- (id)localPeerID;
- (id)modelVersionHash;
- (void)setTransactionDate:(id)arg1;
- (id)storeNames;
- (id)storeSaveSnapshotForStore:(id)arg1;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (id)transactionDate;

@end