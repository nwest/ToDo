//
//  Task.m
//  ToDo
//
//  Created by Nate West on 2/8/13.
//  Copyright (c) 2013 Nate West. All rights reserved.
//

#import "Task.h"

@implementation Task
@dynamic text;
@dynamic completedAt;

-(BOOL)isCompleted
{
    return self.completedAt != nil;
}

- (void)setCompleted:(BOOL)completed
{
    self.completedAt = completed ? [NSDate date] : nil;
}

@end
