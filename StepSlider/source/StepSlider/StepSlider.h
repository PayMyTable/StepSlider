//
//  StepSlider.h
//  StepSlider
//
//  Created by Nick on 10/15/15.
//  Copyright © 2015 spromicky. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE

@interface StepSlider : UIControl

/**
 *  Maximum amount of dots in slider.
 */
@property (nonatomic) IBInspectable NSUInteger maxCount;

/**
 *  Currnet selected dot index.
 */
@property (nonatomic) IBInspectable NSUInteger index;


/**
 *  Height of the slider track.
 */
@property (nonatomic) IBInspectable CGFloat trackHeight;

/**
 *  Radius of the default dots on slider track.
 */
@property (nonatomic) IBInspectable CGFloat trackCircleRadius;

/**
 *  Radius of the slider main wheel.
 */
@property (nonatomic) IBInspectable CGFloat sliderCircleRadius;


/**
 *  Color of the slider slider.
 */
@property (nonatomic, strong) IBInspectable UIColor *trackColor;

/**
 *  Color og the slider main wheel.
 */
@property (nonatomic, strong) IBInspectable UIColor *sliderCircleColor;

/**
 * Title Text Font Size
 */
@property (nonatomic) IBInspectable CGFloat titleFontSize;

/**
 * Title (Selected) Text Color
 */
@property (nonatomic, strong) IBInspectable UIColor *titleColorSelected;

/**
 * Title (Normal) Text Color
 */
@property (nonatomic, strong) IBInspectable UIColor *titleColorNormal;

/**
 * Title Text Background Color
 */
@property (nonatomic, strong) IBInspectable UIColor *titleBackgroundColor;

/**
 * Check Check Font Size
 */
@property (nonatomic) IBInspectable CGFloat checkFontSize;

/**
 * Title Check Color
 */
@property (nonatomic, strong) IBInspectable UIColor *checkColor;

/**
 *  Set the `index` property to parameter value.
 *
 *  @param index    The index, that you wanna to be selected.
 *  @param animated `YES` to animate changing of the `index` property.
 */
- (void)setIndex:(NSUInteger)index animated:(BOOL)animated;

- (void)setTitleForIndex:(NSUInteger)index title:(NSString*)title;
- (void)setCheckForIndex:(NSUInteger)index title:(NSString*)title;
- (void)setCheckBox:(NSUInteger)index enabled:(Boolean)enabled;

@end
