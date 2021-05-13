//
//  JMessageViewController.h
//  Fitbox
//
//  Created by Tony Wang on 2/18/16.
//  
//

#import <UIKit/UIKit.h>

@interface JMessageViewController : UIViewController

@property (nonatomic, retain) JMessageHistory *mMessageHistory;

@property (nonatomic, retain) JListing *mListing;
@property (nonatomic, retain) JUser *mPerson;
@end
