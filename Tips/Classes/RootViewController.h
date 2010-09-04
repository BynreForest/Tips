//
//  RootViewController.h
//  Tips
//
//  Created by Brendan Gaynor on 8/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController {
	NSMutableArray *eventsArray;
	
	NSArray *tableArray;
}

@property (nonatomic, retain) NSMutableArray *eventsArray;
@property (nonatomic, retain) NSArray *tableArray;

@end
