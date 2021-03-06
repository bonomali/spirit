/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSArray, UIMoreListController;

__attribute__((visibility("hidden")))
@interface UIMoreNavigationController : UINavigationController {
@private
	UIMoreListController* _moreListController;
	UINavigationController* _originalNavigationController;
	UIViewController* _originalRootViewController;
}
@property(assign, nonatomic) UIViewController* displayedViewController;
@property(assign, nonatomic) BOOL allowsCustomizing;
@property(retain, nonatomic) NSArray* moreViewControllers;
-(id)init;
-(void)dealloc;
-(id)_preparedViewController:(id)controller;
-(void)_restoreOriginalNavigationController;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)didShowViewController:(id)controller animated:(BOOL)animated;
@end

