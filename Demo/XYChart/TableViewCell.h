//
//  TableViewCell.h
//  UUChartView
//
//  Created by shake on 15/1/4.
//  Copyright (c) 2015年 uyiuyao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYChartDataSource.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic, strong) XYChartDataSource *group;

@end
