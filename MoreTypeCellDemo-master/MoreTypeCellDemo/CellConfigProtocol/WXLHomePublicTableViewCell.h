//
//  WXLHomePublicTableViewCell.h
//  MoreTypeCellDemo
//
//  Created by 小腊 on 2019/4/14.
//  Copyright © 2019 wxl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXLPublicCellConfigProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface WXLHomePublicTableViewCell : UITableViewCell
/**
 协议对象
 */
//cell 配置 这个id类型的变量其实就是一个model 但是因为不确定是哪个model 所以用 id 表示
@property (nonatomic, strong) id<WXLPublicCellConfigProtocol>cellConfig;
@end

NS_ASSUME_NONNULL_END
