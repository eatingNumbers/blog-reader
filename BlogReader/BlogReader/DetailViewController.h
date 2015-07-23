//
//  DetailViewController.h
//  BlogReader
//
//  Created by Dean Laurea on 7/23/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

