/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDAccessoryManager, HMMessageDispatcher, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver> {
    HMDAccessoryManager *_accessoryManager;
    unsigned int _generationCounter;
    HMMessageDispatcher *_messageDispatcher;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) HMDAccessoryManager * accessoryManager;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property unsigned int generationCounter;
@property(readonly) unsigned int hash;
@property(retain) HMMessageDispatcher * messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_registerForMessages;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (id)accessoryManager;
- (unsigned int)generationCounter;
- (id)initWithMessageDispatcher:(id)arg1 accessoryManager:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setAccessoryManager:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end