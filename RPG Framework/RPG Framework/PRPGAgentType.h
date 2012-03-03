//
//  PRPGAgentType.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PRPGAgentType <NSObject>


+ @property (nonatomic, strong) NSArray * agent_types;
- @property (nonatomic, strong) NSString * name;

+ (NSArray *) getStrongTypesComparedOf:(PRPGAgentType *)agent_type;
+ (NSArray *) getWeakTypesComparedOf:(PRPGAgentType *)agent_type;


@end
