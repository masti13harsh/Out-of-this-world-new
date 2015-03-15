//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by Harsh Sapra on 14/03/15.
//  Copyright (c) 2015 Harsh Sapra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITabBarDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
