//
//  DetailViewController.h
//  Hockey-Test
//
//  Created by Paddy O'Brien on 2015-04-24.
//  Copyright (c) 2015 Simplemind. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

