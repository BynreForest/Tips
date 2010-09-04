//
//  TipsAppDelegate.h
//  Tips
//
//  Created by Brendan Gaynor on 8/4/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class JSONViewController;

@interface TipsAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
	UINavigationController *navigationController;
	JSONViewController *jsonViewController;
	

    
@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
}

@property (nonatomic, retain) JSONViewController *jsonViewController;
@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;

/**
 managed object context is an instance of NSManagedObjectContext. A context represents 
 a single object space, or scratch pad, in an application. Its primary responsibility 
 is to manage a collection of managed objects. These objects form a group of related 
 model objects that represent an internally consistent view of one or more persistent stores. 
 The context is a powerful object with a central role in your application, with responsibilities 
 from life-cycle management to validation, relationship maintenance, and undo/redo.
 **/
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
/**
 A managed object model is an instance of NSManagedObjectModel. It’s an object representation 
 of a schema that describes your database, and so the managed objects you use in your application
 **/
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
/**
 The persistent store coordinator plays a central role in how Core Data manages data; however, 
 you don’t often interact with the coordinator directly when you use the framework. 
 **/
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (NSString *)applicationDocumentsDirectory;

@end

