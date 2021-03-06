//
//  PMOPicture.h
//  Parallels_test
//
//  Created by Peter Molnar on 09/02/2016.
//  Copyright © 2016 Peter Molnar. All rights reserved.
//
#define kBaseURLForImages [NSString stringWithFormat:@"http://93.175.29.76/web/wwdc/"]

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIImage+Thumbnail.h"

@interface PMOPicture : NSObject
@property (strong,nonatomic) NSString *imageDescription;
@property (strong,nonatomic) NSString *imageFileName;
@property (strong,nonatomic) NSString *imageTitle;
@property (strong,nonatomic) NSURL *imageURL;
@property (strong,nonatomic) UIImage *image;
@property (strong,nonatomic) UIImage *thumbnailImage;

+ (instancetype)PictureFromDictionary:(NSDictionary *)pictureDetails baseURLAsStringForImage:(NSString *)baseURLAsString;

@end
