//
//  AppDelegate.h
//  comic-shelf
//
//  Created by Jordan Upham on 9/19/16.
//  Copyright © 2016 Jordan Upham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

