//
//  MasterViewController.h
//  LobbyKiosk
//
//  Created by Andrew Goodwin on 5/25/12.
//  Copyright (c) 2012 Conway Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
