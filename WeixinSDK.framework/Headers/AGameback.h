//
//  AGameback.h
//  AGameSDK
//
//  Created by 杨晨 on 2017/6/21.
//  Copyright © 2017年 Amshine. All rights reserved.
//



@protocol AGameback <NSObject>
@optional
/**
 *  微信登陆成功
 */
- (void)onConnSucc:(NSString *)code;;
/**
 *  微信登陆失败
 */
-(void)onConnFailed:(int)code err:(NSString*)err;

/**
 *  QQ登陆成功
 */
- (void)onQQConnSucc:(NSString *)code openid:(NSString *)openID;

/**
 *  QQ登陆失败
 */
-(void)onQQConnFailed:(int)code err:(NSString*)err;

/**
 *  微信支付成功回调
 **/
-(void)onPaySuccee:(NSString *)msg;
/**
 *  微信支付失败回调
 **/
-(void)onPayFail:(NSString *)msg;
/**
 *  微信用户退出支付回调
 **/
-(void)onPayOutPull:(NSString *)msg;
/**
 *  微信支付的结果
 **/
-(void)onPayResults:(NSString *)msg;
@end
