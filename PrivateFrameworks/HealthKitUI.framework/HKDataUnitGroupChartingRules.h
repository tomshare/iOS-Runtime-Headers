/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSArray, NSDictionary, NSMutableDictionary;

@interface HKDataUnitGroupChartingRules : NSObject {
    int _defaultChartStyle;
    int _defaultStyle;
    NSArray *_defaultYAxisChartBoundsRules;
    NSDictionary *_defaultYAxisChartBoundsRulesByUnit;
    NSMutableDictionary *_rulesByTimeScope;
    BOOL _shouldHideAverageLine;
    BOOL _shouldOverrideMinYValue;
    BOOL _shouldStartDayAtNoon;
    BOOL _shouldUseFullYAxisRange;
}

@property(readonly) int defaultChartStyle;
@property(retain) NSArray * defaultYAxisChartBoundsRules;
@property(retain) NSDictionary * defaultYAxisChartBoundsRulesByUnit;
@property BOOL shouldHideAverageLine;
@property BOOL shouldOverrideMinYValue;
@property BOOL shouldStartDayAtNoon;
@property BOOL shouldUseFullYAxisRange;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(int)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(int)arg3;
- (float)chartPointLineWidthForTimeScope:(int)arg1;
- (float)chartPointRadiusForTimeScope:(int)arg1;
- (int)chartStyleForTimeScope:(int)arg1;
- (int)defaultChartStyle;
- (id)defaultYAxisChartBoundsRules;
- (id)defaultYAxisChartBoundsRulesByUnit;
- (id)defaultYAxisChartBoundsRulesForUnit:(id)arg1;
- (id)initWithDefaultChartStyle:(int)arg1;
- (id)intervalComponentsForTimeScope:(int)arg1;
- (void)setChartPointLineWidth:(float)arg1 forTimeScope:(int)arg2;
- (void)setChartPointRadius:(float)arg1 forTimeScope:(int)arg2;
- (void)setChartStyle:(int)arg1 forTimeScope:(int)arg2;
- (void)setDefaultYAxisChartBoundsRules:(id)arg1;
- (void)setDefaultYAxisChartBoundsRulesByUnit:(id)arg1;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(int)arg2;
- (void)setShouldHideAverageLine:(BOOL)arg1;
- (void)setShouldOverrideMinYValue:(BOOL)arg1;
- (void)setShouldStartDayAtNoon:(BOOL)arg1;
- (void)setShouldUseFullYAxisRange:(BOOL)arg1;
- (BOOL)shouldHideAverageLine;
- (BOOL)shouldOverrideMinYValue;
- (BOOL)shouldStartDayAtNoon;
- (BOOL)shouldUseFullYAxisRange;

@end