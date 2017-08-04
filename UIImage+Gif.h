//
//  UIImage+Gif.h
//  UIImage+Categories
//
//  Created by wyon on 17/6/4.
//  Copyright © 2017年 wyon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Gif)

/** 用一个Gif生成UIImage，传入一个GIFData */
+ (UIImage *)animatedImageWithAnimatedGIFData:(NSData *)theData;

/** 用一个Gif生成UIImage，传入一个GIF路径 */
+ (UIImage *)animatedImageWithAnimatedGIFURL:(NSURL *)theURL;

@end
