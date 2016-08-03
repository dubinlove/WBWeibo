//
//  UIImage+Image.m
//  传智微博
//
//  Created by teacher on 15-3-21.
//  Copyright (c) 2015年 itcast. All rights reserved.
//

#import "UIImage+Image.h"

@implementation UIImage (Image)
+ (UIImage *)imageWithOriginalImageName:(NSString *)imageName
{
    UIImage *selImg = [UIImage imageNamed:imageName];
    
    // 让图片保持最原始的图片
    return [selImg imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
}
+ (UIImage *)imageWithStretchableImageName:(NSString *)imageName
{
    UIImage *img = [UIImage imageNamed:imageName];
    
    // 让图片保持最原始的图片
    return [img stretchableImageWithLeftCapWidth:img.size.width * 0.5 topCapHeight:img.size.height * 0.5];

}


@end
