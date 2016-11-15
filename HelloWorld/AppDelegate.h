//
//  AppDelegate.h
//  HelloWorld
//
//  Created by Vishnu T Vijay on 15/11/16.
//  Copyright © 2016 thinkpalm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

