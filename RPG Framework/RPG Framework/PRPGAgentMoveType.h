//
//  PRPGAgentMoveType.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PRPGMoveAgentType <NSObject>

- @property (nonatomic, strong) NSString * name;
+ @property (nonatomic, strong) NSMultableArray * move_types;


@end
