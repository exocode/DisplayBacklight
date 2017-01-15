//
//  AppDelegate.h
//  DisplayBacklight
//
//  Created by Thomas Buck on 21.12.15.
//  Copyright © 2015 xythobuz. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Serial;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSApplication *application;

- (void)stopAmbilight;
- (void)newDisplayList:(NSArray *)displayIDs;

+ (double)map:(double)val FromMin:(double)fmin FromMax:(double)fmax ToMin:(double)tmin ToMax:(double)tmax;

@end

