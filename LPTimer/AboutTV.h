//
//  AboutTV.h
//  LPTimer
//
//  Created by Chen Terence on 13-5-6.
//  Copyright (c) 2013年 神楽坂雅詩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutTV : UIView <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    NSMutableArray *_tableArray;
    UITableView *_tableView;
    BOOL _yl;
}
@property (nonatomic, retain) NSMutableArray *tableArray;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, assign) BOOL yl;
@end
