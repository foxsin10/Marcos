//
//  YZJForEach.h
//  Marcos
//
//  Created by 杨子疆 on 2018/2/9.
//  Copyright © 2018年 yzj. All rights reserved.
//

#ifndef YZJForEach_h
#define YZJForEach_h

// https://pspdfkit.com/blog/2017/even-swiftier-objective-c/
@protocol YZJFastEnumeration <NSFastEnumeration>
- (id)yzj_enumeratedType;
@end

@interface NSArray <ElementType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (ElementType)yzj_enumeratedType;

@end

@interface NSSet <ElementType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (ElementType)yzj_enumeratedType;

@end

@interface NSDictionary <KeyType, ValueType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (KeyType)yzj_enumeratedType;

@end

@interface NSOrderedSet <ElementType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (ElementType)yzj_enumeratedType;

@end

@interface NSPointerArray (PSPDFFastEnumeration) <YZJFastEnumeration>

- (void *)yzj_enumeratedType;

@end

@interface NSHashTable <ElementType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (ElementType)yzj_enumeratedType;

@end

@interface NSMapTable <KeyType, ValueType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (KeyType)yzj_enumeratedType;

@end

@interface NSEnumerator <ElementType> (YZJFastEnumeration)
<YZJFastEnumeration>

- (ElementType)yzj_enumeratedType;

@end

// Usage: forEach (s, strings) { ... }
#define forEach(element, collection) for (typeof((collection).yzj_enumeratedType) element in (collection))


#endif /* YZJForEach_h */
