//
//  PRPGBattle.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PRPGBattle <NSObject> 


- @property (nonatomic, strong) PRPGCharacter * player_a;
- @property (nonatomic, strong) PRPGCharacter * player_b;
//- @property (nonatomic, strong) double time_limit;

@end
