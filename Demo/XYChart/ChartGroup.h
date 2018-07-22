//
//  ChartGroup.h
//  XYChart
//
//  Created by Daniel on 2018/7/22.
//  Copyright © 2018 Daniel. All rights reserved.
//

#import "XYChartGroup.h"

@interface ChartGroup : XYChartGroup

- (instancetype)initWithStyle:(XYChartStyle)style section:(NSUInteger)section row:(NSUInteger)row;

- (instancetype)initWithStyle:(XYChartStyle)style section:(NSUInteger)section row:(NSUInteger)row width:(CGFloat)width;

@end
