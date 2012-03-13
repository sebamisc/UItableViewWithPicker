//
//  ViewController.h
//  uipickerviewtable
//
//  Created by Sebastian Flückiger on 13.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) UIPickerView *picker;
@property (nonatomic, retain) NSMutableArray *arrayColors;

@end
