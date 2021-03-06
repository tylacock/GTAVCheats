//
//  GTAViewController.h
//  GTAVCheats
//
//  Created by Ty Lacock on 10/4/13.
//  Copyright (c) 2013 Ty Lacock. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>


@interface GTAViewController : UIViewController <ADBannerViewDelegate>

@property (weak, nonatomic) IBOutlet ADBannerView *banner;

@property (weak, nonatomic) IBOutlet UILabel *testLabel;
@property (weak, nonatomic) IBOutlet UILabel *playerLabel;
@property (weak, nonatomic) IBOutlet UILabel *worldLabel;
@property (weak, nonatomic) IBOutlet UILabel *spawnLabel;

@end
