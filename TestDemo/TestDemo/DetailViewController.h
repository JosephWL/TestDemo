//
//  DetailViewController.h
//  TestDemo
//
//  Created by kris on 16/1/7.
//  Copyright © 2016年 kris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

