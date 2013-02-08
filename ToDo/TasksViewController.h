//
//  TasksViewController.h
//  ToDo
//
//  Created by Nate West on 2/8/13.
//  Copyright (c) 2013 Nate West. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TasksViewController : UITableViewController <UITextFieldDelegate>

@property NSManagedObjectContext *managedObjectContext;

@property IBOutlet UITextField *taskTextField;

@end
