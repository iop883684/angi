//
//  DetailViewController.h
//  AnGi
//
//  Created by DoLH on 8/18/14.
//  Copyright (c) 2014 Ominext. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
