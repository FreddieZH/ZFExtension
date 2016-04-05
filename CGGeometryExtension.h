//
//  CGGeometryExtension.h
//  Test
//
//  Created by Zfan on 4/5/16.
//  Copyright © 2016 Zfan. All rights reserved.
//

#ifndef CGGeometryExtension_h
#define CGGeometryExtension_h

CF_IMPLICIT_BRIDGING_ENABLED

CF_ASSUME_NONNULL_BEGIN

/*  Make a rect from `size' */
/*  根据Size创建一个Rect  */
CG_INLINE CGRect CGRectFromCGSize(CGFloat x, CGFloat y, CGSize size);

/*  Make a rect for bounds from `size' */
/*  根据Size创建一个(Bounds)  */
CG_INLINE CGRect CGRectForBoundsFromCGSize(CGSize size);

/*** Definitions of inline functions. ***/
/*  函数定义   */

CG_INLINE CGRect
CGRectFromCGSize(CGFloat x, CGFloat y, CGSize size)
{
    CGRect rect;
    rect.origin.x = x;
    rect.origin.y = y;
    rect.size = size;
    return rect;
}

CG_INLINE CGRect
CGRectForBoundsFromCGSize(CGSize size)
{
    CGRect rect;
    rect.origin.x = rect.origin.y = 0;
    rect.size = size;
    return rect;
}

CF_ASSUME_NONNULL_END

CF_IMPLICIT_BRIDGING_DISABLED

#endif /* CGGeometryExtension_h */
