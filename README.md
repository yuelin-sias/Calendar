# Calendar
#自己参照网上代码写的日历Demo
#使用方法



将calendar文件夹导入工程中，在需要使用的controller中进行初始化
遵守YHBaseCalendarViewDelegate协议
YLCalendarView *view = [[YLCalendarView alloc] initWithFrame:self.view.bounds];
view.delegate = self;//设置代理
[view reloadView];
[self.view addSubview:view];

//选中日期时可以进行的操作
- (void)YHBaseCalendarViewScrollEndToDate:(YLCalendarModel *)dateModel;


//滑到下个月份页面时可以进行的操作
- (void)YHBaseCalendarViewSelectAtDateModel:(YLCalendarModel *)dateModel;

