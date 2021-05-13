//
//  JPushMethods.h
//  Zold
//
//  Created by Tony Wang on 9/2/14.
//  

#import <Foundation/Foundation.h>
#import "JPushAlertView.h"

@class JUser;
@class JPost;

@interface JPushMethods : NSObject

+ (void)likedPost:(JItem*)post;
+ (void)acceptListing:(JListing*)listing;

+ (void)handlePushUserInfo:(NSDictionary *)userInfo withAlertDelegate:(id)delegate;

@end
