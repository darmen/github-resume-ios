//
//  DetailViewController.h
//  github-resume-ios
//
//  Created by Darmen Amanbayev on 4/28/14.
//  Copyright (c) 2014 Darmen Amanbayev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
