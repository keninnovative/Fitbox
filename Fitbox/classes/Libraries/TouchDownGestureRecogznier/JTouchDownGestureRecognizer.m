//
//  JTouchDownGestureRecognizer.m
//  ThisIsWhere
//
//  Created by Tony Wang on 6/18/14.
//  Copyright (c) 2014 Tony Mobile. All rights reserved.
//

#import "JTouchDownGestureRecognizer.h"
#import <UIKit/UIGestureRecognizerSubclass.h>
@implementation JTouchDownGestureRecognizer
-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    if (self.state == UIGestureRecognizerStatePossible) {
        self.state = UIGestureRecognizerStateRecognized;
    }
}

-(void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event{
//    if (self.state == UIGestureRecognizerStatePossible) {
//        self.state = UIGestureRecognizerStateRecognized;
//    }
    self.state = UIGestureRecognizerStateFailed;
}

-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event{
    self.state = UIGestureRecognizerStateFailed;
}

@end
