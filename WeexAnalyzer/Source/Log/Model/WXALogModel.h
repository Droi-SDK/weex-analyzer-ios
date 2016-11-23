//
//  WXALogModel.h
//  WeexAnalyzer
//
//  Created by xiayun on 16/10/24.
//  Copyright © 2016年 alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WXLog.h>

@interface WXALogModel : NSObject

@property (nonatomic, assign) NSInteger flag;
@property (nonatomic, copy) NSString *message;

@end
