//
//  TipEntity.h
//  Tips
//
//  Created by Brendan Gaynor on 8/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface TipEntity :  NSManagedObject  
{
}


@property (nonatomic, retain) NSString * tip;
@property (nonatomic, retain) NSString * category;
@property (nonatomic, retain) NSString * tipname;

@end



