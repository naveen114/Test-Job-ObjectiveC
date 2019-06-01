//
//  StoryViewController.h
//  Design
//
//  Created by Antique on 18/11/18.
//  Copyright © 2018 Antique. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Present.h"
#import "Dismiss.h"

@interface StoryViewController : UIViewController <UIScrollViewDelegate>{
    NSLayoutConstraint *topConstraint, *leftConstraint, *bottomConstraint, *rightConstraint;
    NSLayoutConstraint *headerHeightConstraint;
}

@property (nonatomic, strong) IBOutlet UIView *contentContainerView;
@property (nonatomic, strong) IBOutlet UIImageView *headerImageView;
@property (nonatomic, strong) IBOutlet UIButton *dismissButton;
@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;

-(void) positionContainer:(CGFloat)top left:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;
-(void) setHeaderHeight:(CGFloat)height;
-(void) configureRoundedCorners:(BOOL)roundedCorners;
@end
