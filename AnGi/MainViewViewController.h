//
//  MainViewViewController.h
//  AnGi
//
//  Created by DoLH on 8/18/14.
//  Copyright (c) 2014 Ominext. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewViewController : UIViewController

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@end
