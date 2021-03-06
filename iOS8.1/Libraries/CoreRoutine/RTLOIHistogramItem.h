/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class RTLocationOfInterest;

@interface RTLOIHistogramItem : NSObject
{
    RTLocationOfInterest *_locationOfInterest;
    double _timeOfStay;
    double _probability;
    long long _numOfEvents;
}

@property(nonatomic) long long numOfEvents; // @synthesize numOfEvents=_numOfEvents;
@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) double timeOfStay; // @synthesize timeOfStay=_timeOfStay;
@property(retain, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isHighProbabilityHistogramItem;
- (id)initWithLocationOfInterest:(id)arg1 timeOfStay:(double)arg2 andNumOfEvents:(long long)arg3;

@end

