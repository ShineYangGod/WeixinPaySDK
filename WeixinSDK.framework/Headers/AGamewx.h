//
//  AGamewx.h
//  AGameSDK
//
//  Created by 杨晨 on 2017/6/21.
//  Copyright © 2017年 Amshine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGameback.h"
@interface AGamewx : NSObject


+(instancetype) shareInstance;

/**
 * 获取应用标示
 */

-(NSString *)type;
/**
 *
 *  初始化微信登陆
 **/
-(void)initWithWX:(NSString *)appid;
/**
 *  微信登陆，必须先初始化
 **/
-(void)onLoginWeixin;
/**
 *  重写handleOpenURL的方法
 *
 **/
-(BOOL)applicationHandleOpenURL:(NSURL *)url;
/**
 *  重写openURL的方法
 *
 **/
-(BOOL)applicationOpenURL:(NSURL *)url;
/**
 *  一般代理回调
 **/
-(int)setConnListener: (id<AGameback>)listener;
/**
 *  微信支付代理回调  （特殊情况下用）
 **/
-(int)setConnListenerPay:(id<AGameback>)listener;
/**
 *  微信分享部分
 *
 **/
-(void)shareForWinXinImage:(NSString *)type;
/**
 *  微信邀请好友
 *  @parm  title    邀请的标题
 *  @parm  icon     邀请的图片
 *  @parm  url      邀请的链接
 *
 **/
-(void)shareForWinXinWebPage:(NSInteger)type Str:(NSString *)string title:(NSString *)title shareIcon:(NSString *)icon shareURL:(NSString *)url;
/**
 *  微信支付
 *  @parm  open_id          由用户微信号和AppID组成的唯一标识
 *  @parm  partnerId        商家ID
 *  @parm  prepayId         预支付订单这个是后台跟微信服务器交互后
 *  @parm  packageValue     根据财付通文档填写的数据和签名
 *  @parm  nonceStr         随机编码
 *  @parm  timeStamp        时间戳
 *  @parm  sign             签名
 **/
-(void)onPayWeixinAppId:(NSString *)open_id onPartnerId:(NSString *)partnerId onPrepayId:(NSString *)prepayId onPackageValue:(NSString *)packageValue onNonceStr:(NSString *)nonceStr onTimeStamp:(UInt32)timeStamp onSign:(NSString *)sign;

@end
