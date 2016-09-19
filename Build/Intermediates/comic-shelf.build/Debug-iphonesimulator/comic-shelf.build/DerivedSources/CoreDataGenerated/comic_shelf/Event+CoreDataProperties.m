//
//  Event+CoreDataProperties.m
//  
//
//  Created by Jordan Upham on 9/19/16.
//
//  This file was automatically generated and should not be edited.
//

#import "Event+CoreDataProperties.h"

@implementation Event (CoreDataProperties)

+ (NSFetchRequest<Event *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Event"];
}

@dynamic timestamp;

@end
