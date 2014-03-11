/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSMutableArray, NSTimer;

@interface PLPowerAssertionLiteLogger : PLLogger {
    NSMutableArray *_assertionStormTracking;
    NSTimer *_rearmAssertionNotificationsTimer;
    NSMutableArray *_trackedAssertions;
    BOOL _trackingAssertions;
}

@property(retain) NSMutableArray * assertionStormTracking;
@property(retain) NSTimer * rearmAssertionNotificationsTimer;
@property(retain) NSMutableArray * trackedAssertions;
@property BOOL trackingAssertions;

- (id)assertionStormTracking;
- (void)checkTrackedAssertionRate;
- (void)dealloc;
- (void)handleBatteryLevelChange:(id)arg1;
- (void)handleRearm:(id)arg1;
- (void)handleWake:(id)arg1;
- (id)init;
- (void)log;
- (void)logAssertion:(id)arg1 withState:(id)arg2 withExtras:(id)arg3;
- (void)logAssertions;
- (id)rearmAssertionNotificationsTimer;
- (void)setAssertionStormTracking:(id)arg1;
- (void)setRearmAssertionNotificationsTimer:(id)arg1;
- (void)setTrackedAssertions:(id)arg1;
- (void)setTrackingAssertions:(BOOL)arg1;
- (id)trackedAssertions;
- (BOOL)trackingAssertions;
- (void)watchAssertionNotifications:(BOOL)arg1;

@end