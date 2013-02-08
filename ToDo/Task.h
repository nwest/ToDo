//
//  Task.h
//  ToDo
//
//  Created by Nate West on 2/8/13.
//  Copyright (c) 2013 Nate West. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Task : NSManagedObject

@property NSString *text;
@property NSDate *completedAt;

@property (nonatomic, getter = isCompleted) BOOL completed;

@end
