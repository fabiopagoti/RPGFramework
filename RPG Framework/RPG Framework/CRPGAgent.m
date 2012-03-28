//
//  CRPGAgent.m
//  RPG Framework
//
//  Created by Fábio Pagoti on 12-03-10.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import "CRPGAgent.h"

@implementation CRPGAgent

@synthesize name = _name;



@synthesize types = _types;

@synthesize life_points = _life_points;
@synthesize max_life_points = _max_life_points;

@synthesize energy_points = _energy_points;
@synthesize max_energy_points = _max_energy_points;

@synthesize level = _level;
@synthesize experience = _experience;
@synthesize max_experience_to_next_level = _max_experience_to_next_level;

@synthesize attack = _attack;
@synthesize defence = _defence;
@synthesize speed = _speed;

@synthesize skills = _skills;


-(NSMutableArray *)possibleEvolutionPredecessor
{
    
}
-(NSMutableArray *)possibleEvolutionSuccessor
{
    
}
-(CRPGAgent *)verifyEvolutionPredecessor
{
    
}
-(CRPGAgent *)verifyEvolutionSuccessor
{
    
}

-(void)attack:(CRPGAgent *)attackedAgent
{
    
}

@end
