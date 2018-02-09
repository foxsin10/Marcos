//
//  ViewController.m
//  Marcos
//
//  Created by 杨子疆 on 2018/2/9.
//  Copyright © 2018年 yzj. All rights reserved.
//

#import "ViewController.h"
#import "YZJMarcos.h"

@interface Todo: NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *todo;
@end

@implementation Todo

@end


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
{
    NSString *tttl;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    let test = somePeopleNumbers();
    NSLog(@"%@", test);
    var people = @[@"1"];
    processSomePeople(people);

    NSMutableArray<Todo *> *araay;
    araay = @[[[Todo alloc]init],[[Todo alloc]init],[[Todo alloc]init]].mutableCopy;

    let todoList = araay;

    forEach(todo, todoList) {
        NSLog(@"%@, %p", todo, todo);

        var title = todo.title;
        var content = todo.todo;
        title = @"a";
        content = @"tee";
        NSLog(@"%@, %@", title, content);

    };

    forEach(t, test) {
        NSLog(@"%@", t);

    };

    [people enumerateObjectsUsingBlock:^(NSNumber * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSLog(@"%@", obj);
    }];

    let block = ^(NSNumber * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
         NSLog(@"%@", obj);
    };
    [people enumerateObjectsUsingBlock:block];

    removeUserFromCacheWithId(currentUserId());


    NSString *_Nullable userId = currentUserId();
    removeUserFromCacheWithId(userId);

    let usertId = currentUserId();
    removeUserFromCacheWithId(usertId);

    self->tttl = @"adeeqqq";
    NSString *tttl = @"eeqqq";
    NSLog(@"%@, %@", self->tttl, tttl);


    CGRect rect = CGRectMake(0, 0, 100, 50);
    NSValue *boxedRect = @(rect);
    NSLog(@"boxed: %@", boxedRect);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
