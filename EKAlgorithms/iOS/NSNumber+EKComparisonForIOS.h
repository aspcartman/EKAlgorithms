//
// Created by ASPCartman on 26/08/14.
//
#if TARGET_OS_IPHONE

#import <Foundation/Foundation.h>

@interface NSNumber (EKComparisonForIOS)
- (BOOL) isGreaterThan:(NSNumber *)obj;
- (BOOL) isLessThan:(NSNumber *)obj;
@end

#endif
