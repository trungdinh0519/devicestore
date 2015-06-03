//
//  DeviceDetailViewController.h
//  devicestore
//
//  Created by Trung Nguyen on 6/3/15.
//  Copyright (c) 2015 Trung Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface DeviceDetailViewController : UIViewController

@property (strong) NSManagedObject *device;



@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;

- (IBAction)cancel:(id)sender;

- (IBAction)save:(id)sender;

@end
