//
//  SignUpViewController.h
//  Ribbit
//
//  Created by User - HS on 29/05/14.
//  Copyright (c) 2014 Ferma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
- (IBAction)signup:(id)sender;

@end
