//
//  ApplicationContext.h
//  USEvent
//
//  Created by marujun on 15/9/14.
//  Copyright (c) 2015年 MaRuJun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKRootViewController.h"
#import "ZKHomeViewController.h"

@class ApplicationContext;

@interface ApplicationContext : NSObject

+ (instancetype)sharedContext;

@property (nonatomic, readonly) ZKHomeViewController *homeViewController;
@property (nonatomic, readonly) ZKRootViewController *rootViewController;
@property (nonatomic, readonly) UINavigationController *navigationController;

/*!
 @property
 @brief 应用内容的高度，开热点的情况下会变小！！！
 */
@property (nonatomic, assign) CGFloat height;

/*!
 @property
 @brief 是否允许横屏
 */
@property (nonatomic, assign) BOOL enableLandscape;

/*!
 @property
 @brief 是否正在执行后台刷新
 */
@property (nonatomic, assign) BOOL fetchingInBackground;


/*!
 @property
 @brief 是否正在后台导入数据
 */
@property (nonatomic, assign) BOOL importingInBackground;

/*!
 @property
 @brief 是否禁止侧滑
 */
@property (nonatomic, assign) BOOL disableInteractiveGesture;

/*!
 @property
 @brief 是否已跳转到其他应用，如微信、QQ、facebook、微博
 */
@property (nonatomic, assign) BOOL hasSwitchToOtherApp;

- (void)presentNavigationController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;
- (void)dismissNavigationControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;

@end
