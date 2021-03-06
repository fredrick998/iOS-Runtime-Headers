/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKQueryServer> {
    NSDictionary * _baseDataEntityEncodingOptions;
    <NSXPCProxyCreating> * _clientProxy;
    double  _collectionInterval;
    <HDQueryServerDelegate> * _delegate;
    BOOL  _didEndActivationTransaction;
    _HKFilter * _filter;
    HKObjectType * _objectType;
    BOOL  _observingData;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queryQueue;
    int  _queryState;
    NSUUID * _queryUUID;
    int  _shouldFinish;
    int  _shouldPause;
    NSObject<OS_dispatch_semaphore> * _unitTestActivationSemaphore;
    id /* block */  _unitTestBatchLimitSuspendProcessHandler;
    NSObject<OS_dispatch_semaphore> * _unitTestProcessSuspendedSemaphore;
    NSObject<OS_dispatch_queue> * _unitTestQueryQueue;
    id /* block */  _unitTestQueryStateHandler;
    int  _unitTestSamplesBeforeSuspend;
    BOOL  _unitTestShouldWaitForQueryStart;
}

@property (nonatomic, readonly) <NSXPCProxyCreating> *clientProxy;
@property (nonatomic) double collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDQueryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKFilter *filter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic) int queryState;
@property (nonatomic, readonly) NSUUID *queryUUID;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (readonly) Class superclass;
@property (getter=_unitTestBatchLimitSuspendProcessHandler, setter=_setUnitTestBatchLimitSuspendProcessHandler:, nonatomic, copy) id /* block */ unitTestBatchLimitSuspendProcessHandler;
@property (getter=_unitTestQueryStateHandler, setter=_setUnitTestQueryStateHandler:, nonatomic, copy) id /* block */ unitTestQueryStateHandler;
@property (getter=_unitTestSamplesBeforeSuspend, setter=_setUnitTestSamplesBeforeSuspend:, nonatomic) int unitTestSamplesBeforeSuspend;
@property (getter=_unitTestShouldWaitForQueryStart, setter=_setUnitTestShouldWaitForQueryStart:, nonatomic) BOOL unitTestShouldWaitForQueryStart;

- (void).cxx_destruct;
- (id)_activationTransactionString;
- (void)_batchSamplesWithLimit:(unsigned int)arg1 anchor:(id)arg2 includeDeletedObjects:(BOOL)arg3 batchHandler:(id /* block */)arg4;
- (void)_batchSamplesWithLimit:(unsigned int)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 batchHandler:(id /* block */)arg4;
- (id)_collectionObserverState;
- (void)_currentWorkoutDidChange:(id)arg1;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id*)arg2;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id*)arg2 authorizationAnchor:(id*)arg3;
- (void)_pauseServerValidate:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_endObservingDataTypes;
- (void)_queue_setQueueState:(int)arg1;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToRunning;
- (void)_queue_transitionToSuspendedState:(int)arg1;
- (BOOL)_queue_validateConfiguration:(id*)arg1;
- (id)_sampleTypeToObserveForUpdates;
- (void)_scheduleStartQuery;
- (void)_setUnitTestBatchLimitSuspendProcessHandler:(id /* block */)arg1;
- (void)_setUnitTestQueryStateHandler:(id /* block */)arg1;
- (void)_setUnitTestSamplesBeforeSuspend:(int)arg1;
- (void)_setUnitTestShouldWaitForQueryStart:(BOOL)arg1;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;
- (BOOL)_shouldObserveOnPause;
- (BOOL)_shouldStopProcessingQuery;
- (BOOL)_shouldSuspendQuery;
- (void)_unitTestBatchLimitReachedWaitTimeoutSeconds:(unsigned int)arg1;
- (id /* block */)_unitTestBatchLimitSuspendProcessHandler;
- (void)_unitTestInitWithDataObject:(id)arg1 queueTag:(id)arg2;
- (void)_unitTestPrepareToWaitForResumeAction;
- (void)_unitTestProcessResume;
- (void)_unitTestQueryStateChange:(int)arg1;
- (id /* block */)_unitTestQueryStateHandler;
- (void)_unitTestResumeActivation;
- (int)_unitTestSamplesBeforeSuspend;
- (BOOL)_unitTestShouldWaitForQueryStart;
- (void)_unitTestWaitForResumeActivationTimeoutSeconds:(unsigned int)arg1;
- (void)activateServerWithCompletion:(id /* block */)arg1;
- (id)clientProxy;
- (void)clientStateChanged;
- (double)collectionInterval;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivateServer;
- (void)deactivateServerWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (id)filter;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)newDataEntityEnumerator;
- (id)objectType;
- (void)onQueue:(id /* block */)arg1;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(id /* block */)arg1;
- (id)profile;
- (id)queryQueue;
- (int)queryState;
- (id)queryUUID;
- (void)resumeServer;
- (id /* block */)sampleAuthorizationFilter;
- (id)sampleType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(id /* block */)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setQueryState:(int)arg1;

@end
