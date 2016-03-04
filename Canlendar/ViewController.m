//
//  ViewController.m
//  Canlendar
//
//  Created by yl on 16/3/4.
//  Copyright © 2016年 yl. All rights reserved.
//

#import "ViewController.h"
#import "YLCalendarView.h"
@interface ViewController () <YHBaseCalendarViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    YLCalendarView *view = [[YLCalendarView alloc] initWithFrame:self.view.bounds];
    view.delegate = self;
    [view reloadView];
    [self.view addSubview:view];
    
}

- (void)YHBaseCalendarViewScrollEndToDate:(YLCalendarModel *)dateModel {
    
}

- (void)YHBaseCalendarViewSelectAtDateModel:(YLCalendarModel *)dateModel {
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
