//
//  RPRGItem.h
//  RPG_Framework
//
//  Created by Fábio Pagoti on 12-03-01.
//  Copyright (c) 2012 Inlingua Vancouver Granville. All rights reserved.
//

#import <Foundation/Foundation.h>
#import CRPGItem.h

@protocol RPRGItem <NSObject>

- @property (nonatomic, strong) NSString * name;
- @property (nonatomic, strong) NSString * description;

- @property (nonatomic, strong) double cost_to_buy;
- @property (nonatomic, strong) double cost_to_sell;

//- @property (nonatomic, strong) PRPGLocalization * localization;
//- @property (nonatomic, strong) CRPGItem;


- (void) use;



@end
