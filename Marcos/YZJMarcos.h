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
#define let __auto_type const
#endif

#ifndef var
#define var __auto_type
#endif

#endif /* YZJMarcos_h */
