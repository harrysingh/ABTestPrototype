//
//  ABController.h
//  ABTestPrototype
//
//  Created by Manuel Meyer on 12.05.15.
//  Copyright (c) 2015 Manuel Meyer. All rights reserved.
//

#import <Foundation/Foundation.h>
@class OCFWebServer;

@interface ABController : NSObject
-(instancetype)initWithWebServer:(OCFWebServer *)webserver;

+(instancetype)sharedABController;

@end
