//
//  AppDelegate.h
//  BackrgroungDownLoadDemo
//
//  Created by Shou Cheng Tuan  on 2015/4/15.
//  Copyright (c) 2015年 Shou Cheng Tuan . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (copy) void (^backgroundSessionCompletionHandler)();

@end

