

//
//  UIView+Frame.h
//  传智微博
//
//  Created by teacher on 15-3-22.
//  Copyright (c) 2015年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

// 在分类里面会自动生成get,set方法的声明,并不会生成set,get方法的声明和成员属性
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;

@end
