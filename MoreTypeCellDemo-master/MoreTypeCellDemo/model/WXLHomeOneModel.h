//
//  WXLHomeOneModel.h
//  MoreTypeCellDemo
//
//  Created by 小腊 on 2019/4/14.
//  Copyright © 2019 wxl. All rights reserved.
//

#import "WXLHomePublicModel.h"

NS_ASSUME_NONNULL_BEGIN

//model里面就是存储属性的嘛
@interface WXLHomeOneModel : WXLHomePublicModel
/**
 名称
 */
@property (nonatomic, strong) NSString *name;

/**
 背景颜色
 */
@property (nonatomic, strong) UIColor *backColor;
@end

NS_ASSUME_NONNULL_END
