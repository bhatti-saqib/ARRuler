//
//  PlaneDetector.h
//  Ruler
//
//  Created by Saqib Sohail Bhatti on 12/27/18.
//  Copyright © 2018 Saqib Sohail Bhatti. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <SceneKit/SceneKit.h>

@interface PlaneDetector : NSObject

+ (SCNVector4)detectPlaneWithPoints:(NSArray <NSValue* >*)points;


@end
