//
//  CourtOverlayView.h
//  ipad-stats2
//
//  Created by Jim Grandpre on 4/11/13.
//  Copyright (c) 2013 RIPP Volleyball. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CourtOverlayView : UIView
- (void)rotateWithTeam:(NSString*)team increment:(int)increment;
@end
