//
//  DetailViewController.h
//  GetOnThatBus
//
//  Created by Marion Ano on 3/25/14.
//  Copyright (c) 2014 Jaime Hernandez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property NSString *name;
@property NSString *address;
@property NSString *routes;
@property (strong, nonatomic) IBOutlet UIWebView *busStopNameView;

@end
