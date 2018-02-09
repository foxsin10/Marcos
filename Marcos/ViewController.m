//
//  ViewController.m
//  Marcos
//
//  Created by 杨子疆 on 2018/2/9.
//  Copyright © 2018年 yzj. All rights reserved.
//

#import "ViewController.h"
#import "YZJMarcos.h"

//DISPATCH_ASSUME_NONNULL_BEGIN
// Takes in an NSArray<NSString *> *
static void processSomePeople(NSArray<NSString *> *peoples) {
    NSCParameterAssert([peoples isKindOfClass:[NSArray class]]);
    for (NSString *people in peoples) {
        NSCAssert([people isKindOfClass:[NSString class]], @"Should be a NSString");
        // Do some more with people
    }
}
// Returns NSArray<NSNumber *> *
static NSArray<NSNumber *> *somePeopleNumbers() {
    return @[@1, @2, @3];
}

static void removeUserFromCacheWithId(NSString * _Nonnull greeting) {
    // Try to remove the user from the cache
}
// Returns either a NSString or nil
static NSString * _Nullable currentUserId() {
    if (arc4random() % 2 == 0) {
        return @"100";
    } else {
        return nil;
    }
}

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    let people = somePeopleNumbers();
    processSomePeople(people);

    [people enumerateObjectsUsingBlock:^(NSNumber * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {

    }];

    let block = ^(NSNumber * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {

    };
    [people enumerateObjectsUsingBlock:block];

    removeUserFromCacheWithId(currentUserId());


    NSString *_Nullable userId = currentUserId();
    removeUserFromCacheWithId(userId);

    let usertId = currentUserId();
    removeUserFromCacheWithId(usertId);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
