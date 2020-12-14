//
//  LPageControl.h
//  LPageControlDemo
//
//  Created by Xhorse_iOS3 on 2020/12/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LPageControl : UIView

@property (nonatomic, assign) int numberOfPages;
@property (nonatomic, assign) int currentPage;
@property (nonatomic, strong) UIColor *otherDotColor;
@property (nonatomic, strong) UIColor *currentDotColor;
@property (nonatomic, strong) UIColor *currentDotBorderColor;
@property (nonatomic, assign) CGFloat currentDotBorderWidth;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) CGFloat currentDotWidth;
@property (nonatomic, assign) CGFloat otherDotWidth;
@property (nonatomic, assign) CGFloat dotHeight;
@property (nonatomic, assign) CGFloat dotSpace;

@end

NS_ASSUME_NONNULL_END
