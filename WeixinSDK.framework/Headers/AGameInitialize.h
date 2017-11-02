//
//  AGameInitialize.h
//  AGameSDK
//
//  Created by 杨晨 on 2017/6/22.
//  Copyright © 2017年 Amshine. All rights reserved.
//


#ifndef SDK_AGameInitialize_h
#define SDK_AGameInitialize_h

#import <Foundation/Foundation.h>

#import "AGamewx.h"


#import "AGameFriendship.h"

@interface AGameInitialize : NSObject

/**
 *  获取管理器实例
 *
 *  @return 管理器实例
 */
+(AGameInitialize*)sharedInstance;

/**
 *  初始化SDK
 *
 *  @param sdkAppId    用户标识接入SDK的应用ID
 *  @param accountType 用户的账号类型
 *
 *  @return 0 成功
 */
-(int)initSdk:(NSString *)sdkAppId accountType:(FriendAllowType)accountType;
/**
 *  获取登陆的类型
 *
 *  @return 发送方标识
 */
-(NSString *)sender;
@end

#endif
