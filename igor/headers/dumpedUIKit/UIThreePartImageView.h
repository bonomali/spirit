/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIThreePartImageView : UIView {
@private
	XXStruct_UUz0SD _slices;
	UIImage* _image;
}
-(void)dealloc;
-(void)setImage:(id)image;
-(void)setSlices:(XXStruct_UUz0SD)slices;
-(void)drawRect:(CGRect)rect;
@end

