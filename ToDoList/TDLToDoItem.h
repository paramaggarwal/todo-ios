//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by Param Aggarwal on 05/04/14.
//  Copyright (c) 2014 Param Aggarwal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
