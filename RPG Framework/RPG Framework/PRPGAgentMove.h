//
//  PRPGAgentMove.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>
#import PRPGAgentMoveType
#import PRPGAgent

@protocol PRPGAgentMove <NSObject>

- @property (nonatomic, strong) NSString * name;
- @property (nonatomic, strong) double * power;
- @property (nonatomic, strong) PRPGAgentMoveType * type;
- @property (nonatomic, strong) NSMultableArray * permitted_for_agents;


- (void) performMove;
- (double) calculateNeutralDamageOfAgent(PRPGAgent *)attacking_agent OnAgent:(PRPGAgent * defending_agent);
- (double) calculateDamageOfAgent(PRPGAgent * attacking_agent)OnAgent:(PRPGAgent * defending_agent);

@end
