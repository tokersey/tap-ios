//
//  ImageStopController.h
//  Tap
//
//  Created by Daniel Cervantes on 5/30/12.
//  Copyright (c) 2012 Indianapolis Museum of Art. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageGalleryViewController.h"

@class TAPAsset, TAPSource, TAPContent, TAPProperty;

@interface ImageScrollViewController : UIScrollView <UIScrollViewDelegate> {
	UIImageView *imageView;
    CGPoint tapLocation;
    BOOL multipleTouches;
    BOOL twoFingerTapIsPossible; 
}

@property (nonatomic, unsafe_unretained) ImageGalleryViewController *scrollView;
@property (assign) NSUInteger index;

- (void)displayImage:(UIImage *)image;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (CGPoint)pointToCenterAfterRotation;
- (CGFloat)scaleToRestoreAfterRotation;
- (void)restoreCenterPoint:(CGPoint)oldCenter scale:(CGFloat)oldScale;

@end
