//
//  GGProgressView.h
//
//  Created by GG on 2016/10/20.
//  Copyright © 2016年 GG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, GGProgressViewStyle) {
    GGProgressViewStyleDefault,     // 默认
    GGProgressViewStyleTrackFillet ,  // 轨道圆角(默认半圆)
    GGProgressViewStyleAllFillet,  //进度与轨道都圆角
};

@interface GGProgressView : UIView

@property(nonatomic) float progress;                        // 0.0 .. 1.0, 默认0 超出为1.
@property(nonatomic) GGProgressViewStyle progressViewStyle;
@property(nonatomic,assign) BOOL isTile;  //背景图片是平铺填充 默认NO拉伸填充 设置为YES时图片复制平铺填充
@property(nonatomic, strong, nullable) UIColor* progressTintColor;
@property(nonatomic, strong, nullable) UIColor* trackTintColor;
@property(nonatomic, strong, nullable) UIImage* progressImage;  //进度条背景图片,默认拉伸填充  优先级大于背景色
@property(nonatomic, strong, nullable) UIImage* trackImage;     //轨道填充图片

- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame progressViewStyle:(GGProgressViewStyle)style;

@end
