//
//  PRPGAgent.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PRPGAgent <NSObject>

@property (nonatomic, strong) NSString * name;

@property (nonatomic, strong) NSMultableArray * types;

@property (nonatomic, strong) double life_points;
@property (nonatomic, strong) double energy_points;
@property (nonatomic, strong) double max_life_points;
@property (nonatomic, strong) double max_energy_points;

@property (nonatomic, strong) double level;
@property (nonatomic, strong) double experience;
@property (nonatomic, strong) double max_experience_to_next_level;

@property (nonatomic, strong) double attack;
@property (nonatomic, strong) double defence;
@property (nonatomic, strong) double speed;

@property (nonatomic, strong) NSMultableArray * skills;



- (NSMultableArray *) possibleEvolutionPredecessor;
- (NSMultableArray *) possibleEvolutionSuccessor;
- (PRPGAgent *) verifyEvolutionPredecessor;
- (PRPGAgent *) verifyEvolutionSuccessor;

@end
