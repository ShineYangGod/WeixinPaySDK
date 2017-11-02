//
//  AGameFriendship.h
//  AGameSDK
//
//  Created by 杨晨 on 2017/6/22.
//  Copyright © 2017年 Amshine. All rights reserved.
//

#ifndef AGameFriendship_h
#define AGameFriendship_h


typedef NS_ENUM(NSInteger, FriendAllowType) {
    /**
     *  微信
     */
    FRIEND_ALLOW_ANY_WX                    = 0,
    
    /**
     *  QQ
     */
    FRIEND_NEED_CONFIRM_QQ                 = 1,
    
    /**
     *  微博
     */
    FRIEND_DENY_ANY_WEIB                   = 2,
};


#endif /* AGameFriendship_h */
