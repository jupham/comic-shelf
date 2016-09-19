//
//  DetailViewController.h
//  comic-shelf
//
//  Created by Jordan Upham on 9/19/16.
//  Copyright © 2016 Jordan Upham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "comic_shelf+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

