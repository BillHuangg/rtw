//
//  RealTimeDataEntity.h
//  bweather
//
//  Created by 黄泽彪 on 15/5/19.
//  Copyright (c) 2015年 BillDev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"
/**
 * store all real time data, until the array' count is larger than 50
 */
@protocol RealTimeDataEntityDelegate <NSObject>

- (void)requestFinished:(NSDictionary *)data;

@end

@interface RealTimeDataEntity : NSObject<ASIHTTPRequestDelegate>

@property (strong, nonatomic) NSMutableArray *temperatureArray;
@property (strong, nonatomic) NSMutableArray *humidityArray;
@property (strong, nonatomic) NSMutableArray *pm25Array;

@property (strong, nonatomic) NSString *temperatureAverageData;
@property (strong, nonatomic) NSString *humidityAverageData;
@property (strong, nonatomic) NSString *pm25AverageData;


- (id) init;
- (void) addTemperatureData: (NSString *) data;
- (void) addHumidityData: (NSString *) data;
- (void) addPM25Data: (NSString *) data;
- (void) reset;
@end
