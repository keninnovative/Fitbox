//
//  JMusicPlayerViewController.h
//  Fitbox
//
//  Created by Tony Wang on 11/23/15.
//  
//

#import <UIKit/UIKit.h>

@interface JMusicPlayerViewController : UIViewController

@property (nonatomic, strong) JSoundCloudPlayListInfo *mMusicInfo;
@property (nonatomic, strong) NSString *mPlaylistId;

@end
