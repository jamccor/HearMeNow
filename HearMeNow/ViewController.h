//
//  ViewController.h
//  HearMeNow
//
//  Created by localadmin LPS on 11/21/14.
//  Copyright (c) 2014 John McCormick. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;


@end
