//
//  CRPGBattleEvent.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CRPGBattleEvent <NSObject>

@required

@optional

- (void) setUpBattle;
- (void) tearDownBattle;
- (void) setUpTurn;
- (void) tearDownTurn;

@end
