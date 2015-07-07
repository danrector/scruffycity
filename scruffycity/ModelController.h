//
//  ModelController.h
//  scruffycity
//
//  Created by Daniel Rector on 7/7/15.
//  Copyright (c) 2015 Daniel Rector. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
