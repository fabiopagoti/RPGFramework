//
//  PRPGCharacter.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PRPGCharacter <NSObject>

- @property (nonatomic, strong) NSString * name;
- @property (nonatomic, strong) NSString * money;

- @property (nonatomic, strong) NSMultableArray * items;
- @property (nonatomic, strong) NSMultableArray * moves;
- @property (nonatomic, strong) NSMultableArray * agents;

//- @property (nonatomic, strong) PRPGLocalization * localization;

@end
