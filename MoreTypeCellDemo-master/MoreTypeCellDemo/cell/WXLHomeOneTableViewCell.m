//
//  WXLHomeOneTableViewCell.m
//  MoreTypeCellDemo
//
//  Created by 小腊 on 2019/4/14.
//  Copyright © 2019 wxl. All rights reserved.
//

#import "WXLHomeOneTableViewCell.h"
#import "WXLHomeOneModel.h"
@implementation WXLHomeOneTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}


- (void)setCellConfig:(id<WXLPublicCellConfigProtocol>)cellConfig
{
    //必须得先赋值给model 然后才能用各种model的属性 给 cell赋值
    //同时 必须得在子cell中来写 不能在父cell同一写 因为很有可能每个cell需要设置的属性不一样 而这个方法的作用就是为cell设置属性！
    WXLHomeOneModel *model = cellConfig;
    
    self.textLabel.text = model.name;
    self.textLabel.textColor = model.backColor;
}
- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
