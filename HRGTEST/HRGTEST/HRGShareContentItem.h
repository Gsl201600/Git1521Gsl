//
//  HRGShareContentItem.h
//  HRGThirdParty
//
//  Created by HRG on 17/2/22.
//  Copyright © 2017年 HRG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HRGShareContentItem : NSObject

@property (nonatomic, strong) UIImage * thumbImage;
@property (nonatomic, strong) UIImage * bigImage;
@property (nonatomic, strong) NSString * imageType;
@property (nonatomic, strong) NSString * title;

@property (nonatomic, strong) NSString * weixinPtitle;
@property (nonatomic, strong) NSString * qqTitle;

@property (nonatomic, strong) NSString * urlString;
@property (nonatomic, strong) NSString * urlImageString;// QQ,QQ空间分享加载图片用的

@property (nonatomic, strong) NSURL * url;
@property (nonatomic, strong) NSString * summary;
@property (nonatomic, strong) NSString * type;

@property (nonatomic, assign) BOOL isImageShareWX;
@property (nonatomic, assign) BOOL isImageShareQQ;// yes 代表用图片 NO代表用URL
@property (nonatomic, strong) NSString * sinaSummary;

@end
