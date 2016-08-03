//
//  UIImage+Image.h
//  传智微博
//
//  Created by teacher on 15-3-21.
//  Copyright (c) 2015年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Image)
+ (UIImage *)imageWithOriginalImageName:(NSString *)imageName;
+ (UIImage *)imageWithStretchableImageName:(NSString *)imageName;
@end
