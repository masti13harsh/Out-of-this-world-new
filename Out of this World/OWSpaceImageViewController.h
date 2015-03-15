//
//  OWSpaceImageViewController.h
//  Out of this World
//
//  Created by Harsh Sapra on 10/03/15.
//  Copyright (c) 2015 Harsh Sapra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
