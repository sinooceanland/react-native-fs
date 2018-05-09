//
//  RNFSManager.h
//  RNFSManager
//
//  Created by Johannes Lumpe on 08/05/15.
//  Copyright (c) 2015 Johannes Lumpe. All rights reserved.
//
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTLog.h>
#else
#import "RCTBridgeModule.h"
#import "RCTLog.h"
#endif

@interface RNFSManager : NSObject <RCTBridgeModule>

@end
