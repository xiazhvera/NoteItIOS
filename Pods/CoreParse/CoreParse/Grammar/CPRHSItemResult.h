//
//  CPRHSItemResult.h
//  CoreParse
//
//  Created by Thomas Davie on 23/10/2011.
//  Copyright (c) 2011 In The Beginning... All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CPParser.h"

@interface CPRHSItemResult : NSObject <CPParseResult>

@property (readwrite, retain) NSMutableArray *contents;

@end
