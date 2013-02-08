//
//  AppDelegate.h
//  ToDo
//
//  Created by Nate West on 2/8/13.
//  Copyright (c) 2013 Nate West. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ToDoIncrementalStore.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
