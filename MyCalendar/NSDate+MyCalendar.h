//
//  NSDate+MyCalendar.h
//  YLCalendar
//
//  Created by yl on 16/3/3.
//  Copyright © 2016年 yl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MyCalendar)


/**
 *获取当前月的天数
 */
- (NSUInteger)YHBaseNumberOfDaysInCurrentMonth;
/**
 *获取本月第一天
 */
- (NSDate *)YHBaseFirstDayOfCurrentMonth;
//下面这些方法用于获取各种整形的数据
/**
 *确定某天是周几
 */
-(int)YHBaseWeekly;
/**
 *年月日 时分秒
 */
-(int)getYear;
-(int)getMonth;
-(int)getDay;
-(int)getHour;
-(int)getMinute;
-(int)getSecond;

@end
