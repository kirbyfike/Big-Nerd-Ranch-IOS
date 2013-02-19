//
//  QuizAppDelegate.h
//  Quiz
//
//  Created by Kirby Fike on 2/19/13.
//  Copyright (c) 2013 Kirby Fike. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QuizViewController;

@interface QuizAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) QuizViewController *viewController;

@end
