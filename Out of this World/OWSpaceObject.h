//
//  OWSpaceObject.h
//  Out of this World
//
//  Created by Harsh Sapra on 07/03/15.
//  Copyright (c) 2015 Harsh Sapra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface OWSpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestingFact;

@property (strong, nonatomic) UIImage *spaceImage;

- (id)initWithData:(NSDictionary *)data andImage:(UIImage *)image;

@end
