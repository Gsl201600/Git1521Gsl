//
//  HRGThirdPartyManager.h
//  HRGThirdParty
//
//  Created by HRG on 2017/2/27.
//  Copyright © 2017年 HRG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeiboSDK.h"
#import "WXApi.h"
#import <TencentOpenAPI/TencentOAuth.h>
#import <TencentOpenAPI/QQApiInterfaceObject.h>
#import <TencentOpenAPI/QQApiInterface.h>

@class HRGShareContentItem;

//登录枚举
typedef NS_ENUM(NSInteger, HRGLoginType) {
    HRGLoginTypeWeiBo = 0,   // 新浪微博
    HRGLoginTypeTencent,      // QQ
    HRGLoginTypeWeiXin       // 微信
};

//微信返回状态码
typedef NS_ENUM(NSInteger, HRGWeiXinErrCode) {
    HRGWeiXinErrCodeSuccess = 0,
    HRGWeiXinErrCodeCancel = -2
};

//分享枚举
typedef NS_ENUM(NSInteger, HRGShareType) {
    HRGShareTypeWeiBo = 0,     // 新浪微博
    HRGShareTypeQQ,            // QQ好友
    HRGShareTypeQQZone,        // QQ空间
    HRGShareTypeWeiXinTimeline,// 朋友圈
    HRGShareTypeWeiXinSession, // 微信朋友
    HRGShareTypeWeiXinFavorite // 微信收藏
};

typedef void(^HRGLoginResultBlock)(NSDictionary * LoginResult, NSString * error);

typedef void(^HRGShareResultBlock)(NSString * shareResult);

@interface HRGThirdPartyManager : NSObject <WBHttpRequestDelegate, WeiboSDKDelegate, WXApiDelegate, TencentSessionDelegate, TencentLoginDelegate>

+ (instancetype)shareThirdPartyManager;

+ (void)getUserInfoWithLoginType:(HRGLoginType)loginType loginResult:(HRGLoginResultBlock)loginResult;

// 判断QQ分享是否成功
+ (void)didReceiveTencentUrl:(NSURL *)url;

+ (void)shareWithContent:(HRGShareContentItem *)contentObj shareType:(HRGShareType)shareType shareResult:(HRGShareResultBlock)shareResult;

@end
