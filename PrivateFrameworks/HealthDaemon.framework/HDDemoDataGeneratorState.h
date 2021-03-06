/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding> {
    BOOL  _createdFromNSKeyedUnarchiver;
    int  _currentDay;
    double  _currentTime;
    double  _endTime;
    BOOL  _finished;
    BOOL  _firstRun;
    NSDate * _firstSampleDate;
    NSDate * _lastRunDate;
    NSDate * _lastSampleDate;
    double  _startTime;
    HDDemoDataGeneratorWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly) int calendarDay;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) int currentDay;
@property (nonatomic) double currentTime;
@property (getter=isCycling, nonatomic, readonly) BOOL cycling;
@property (nonatomic) double endTime;
@property (getter=isExercising, nonatomic, readonly) BOOL exercising;
@property (getter=isFinished, nonatomic) BOOL finished;
@property (getter=isFirstRun, nonatomic) BOOL firstRun;
@property (nonatomic, retain) NSDate *firstSampleDate;
@property (nonatomic, retain) NSDate *lastRunDate;
@property (nonatomic, retain) NSDate *lastSampleDate;
@property (getter=isRunning, nonatomic, readonly) BOOL running;
@property (nonatomic) double startTime;
@property (getter=isSwimming, nonatomic, readonly) BOOL swimming;
@property (nonatomic, retain) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)calendarDay;
- (BOOL)createdFromNSKeyedUnarchiver;
- (id)currentDate;
- (int)currentDay;
- (double)currentTime;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)firstSampleDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCycling;
- (BOOL)isExercising;
- (BOOL)isFinished;
- (BOOL)isFirstRun;
- (BOOL)isRunning;
- (BOOL)isSwimming;
- (id)lastRunDate;
- (id)lastSampleDate;
- (void)setCurrentDay:(int)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setFirstRun:(BOOL)arg1;
- (void)setFirstSampleDate:(id)arg1;
- (void)setLastRunDate:(id)arg1;
- (void)setLastSampleDate:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (double)startTime;
- (id)workoutConfiguration;

@end
