/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableSet, NSString, NSThread;

@interface IMExtendedOperation : NSOperation {
    NSMutableSet *_childOperations;
    NSString *_operationName;
    unsigned int _operationState;
    NSThread *_operationThread;
    double _operationTimeout;
}

@property(retain) NSString * name;
@property(readonly) unsigned int state;
@property double timeout;

+ (id)runLoopModes;

- (unsigned int)_maxChildOperationState;
- (unsigned int)_minChildOperationState;
- (void)_setState:(unsigned int)arg1;
- (void)_startThread;
- (void)_stopWithState:(unsigned int)arg1;
- (void)_threadedMain;
- (void)_timeout;
- (void)addChildOperation:(id)arg1;
- (void)cancel;
- (void)createChildOperations;
- (void)dealloc;
- (void)didFinish;
- (void)fail;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setName:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (unsigned int)state;
- (double)timeout;

@end