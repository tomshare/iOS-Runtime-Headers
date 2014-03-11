/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BBXPCIncomingConnection;

@interface BBDataProviderConnectionResolver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {
    BBXPCIncomingConnection *_connection;
    id _establishedBlock;
}

- (void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)dealloc;
- (void)establishSectionID:(id)arg1 completion:(id)arg2;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)invalidate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end