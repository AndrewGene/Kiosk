//
//  DetailViewController.h
//  LobbyKiosk
//
//  Created by Andrew Goodwin on 5/25/12.
//  Copyright (c) 2012 Conway Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
