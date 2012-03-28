//
//  CRPGAgent.h
//  RPG Framework
//
//  Created by Fábio Pagoti on 12-03-10.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "PRPGAgent.h"

@interface CRPGAgent : NSObject //<PRPGAgent>

@property (nonatomic, strong) NSString * name;

@property (nonatomic, strong) NSMutableArray* types;

@property (nonatomic) double life_points;
@property (nonatomic) double max_life_points;

@property (nonatomic) double energy_points;
@property (nonatomic) double max_energy_points;

@property (nonatomic) double level;
@property (nonatomic) double experience;
@property (nonatomic) double max_experience_to_next_level;

@property (nonatomic) double attack;
@property (nonatomic) double defence;
@property (nonatomic) double speed;

@property (nonatomic, strong) NSMutableArray * skills;


-(NSMutableArray *)possibleEvolutionPredecessor;
-(NSMutableArray *)possibleEvolutionSuccessor;
-(CRPGAgent *)verifyEvolutionPredecessor;
-(CRPGAgent *)verifyEvolutionSuccessor;
-(void)attack:(CRPGAgent *)attackedAgent;


@end
