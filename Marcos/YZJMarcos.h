//
//  YZJMarcos.h
//  Marcos
//
//  Created by 杨子疆 on 2018/2/9.
//  Copyright © 2018年 yzj. All rights reserved.
//

#ifndef YZJMarcos_h
#define YZJMarcos_h

// https://medium.com/@maicki/type-inference-with-auto-type-55a38ef56372
// xcode 8 之后可行

#ifndef let

#if defined(__cplusplus)
#define let auto const
#else
#define let __auto_type const
#endif

#endif

#ifndef var

#if defined(__cplusplus)
#define var auto
#else
#define var __auto_type
#endif

#endif
//#import <UIKit/UIKit.h>

// boxed value 
typedef struct __attribute__((objc_boxable)) CGPoint CGPoint;
typedef struct __attribute__((objc_boxable)) CGSize CGSize;
typedef struct __attribute__((objc_boxable)) CGRect CGRect;
typedef struct __attribute__((objc_boxable)) CGVector CGVector;
typedef struct __attribute__((objc_boxable)) CGAffineTransform CGAffineTransform;
typedef struct __attribute__((objc_boxable)) UIEdgeInsets UIEdgeInsets;
typedef struct __attribute__((objc_boxable)) _NSRange NSRange;

// https://pspdfkit.com/blog/2017/even-swiftier-objective-c/
@protocol YZJFastEnumeration <NSFastEnumeration>
- (id)yzj_enumeratedType;
@end

// Usage: foreach (s, strings) { ... }
#define forEach(element, collection) for (typeof((collection).yzj_enumeratedType) element in (collection))

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

#endif /* YZJMarcos_h */
