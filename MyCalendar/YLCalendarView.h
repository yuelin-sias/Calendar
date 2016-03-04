//
//  YLCalendarView.h
//  YLCalendar
//
//  Created by yl on 16/3/3.
//  Copyright © 2016年 yl. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YLCalendarModel;

@protocol YHBaseCalendarViewDelegate <NSObject>
-(void)YHBaseCalendarViewSelectAtDateModel:(YLCalendarModel *)dateModel;
-(void)YHBaseCalendarViewScrollEndToDate:(YLCalendarModel *)dateModel;
@end

@interface YLCalendarView : UIView

@property(nonatomic,strong)NSDate * currentDate;
//标记数组 用于标记特殊日期 这个数组中存放的必须是YHBaseDateModel 对象
@property(nonatomic,strong)NSArray * markArray;
@property(nonatomic,weak)id<YHBaseCalendarViewDelegate> delegate;

- (void)reloadView;
@end
