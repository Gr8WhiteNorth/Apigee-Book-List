//
//  DetailViewController.h
//  Apigee-Book-List
//
//  Created by Keith Lockhart on 2013-05-23.
//  Copyright (c) 2013 Keith Lockhart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
