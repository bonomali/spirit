/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>


@interface UIScreen : NSObject {
@private
	CGRect _bounds;
}
@property(readonly, assign, nonatomic) CGRect bounds;
@property(readonly, assign, nonatomic) CGRect applicationFrame;
+(id)mainScreen;
-(id)init;
-(CGRect)_applicationFrameForInterfaceOrientation:(int)interfaceOrientation;
@end

