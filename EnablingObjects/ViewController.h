//
//  ViewController.h
//  EnablingObjects
//
//  Created by SBT on 01/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *ButtonOutlet;
- (IBAction)DisableButton:(id)sender;
- (IBAction)EnableButton:(id)sender;

@end

