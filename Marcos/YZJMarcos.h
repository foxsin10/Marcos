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


#endif /* YZJMarcos_h */
