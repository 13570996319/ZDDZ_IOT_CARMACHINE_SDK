//
//  ZDDZDataTool.h
//  zhongDaoDianZiSDK
//
//  Created by dfwx on 2019/5/22.
//  Copyright © 2019 zhongdaodianzi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZDDZDataTool : NSObject
/**
 *  普通字符串转化成十六进制字符串
 **/
+(NSString *)RegularStringIsConvertedToHexAdecimalString:(NSString *)string;
/**
 *  十六进制字符串转化成普通字符串
 **/
+(NSString *)HexAdecimalStringIsConvertedToARegularString:(NSString *)hexString;
/**
 *  十六进制字符转化成10进制
 **/
+(NSString *)HexAdecimalStringIsConvertedToDecimalString:(NSString *)hexString;
/**
 *  十进制字符转化成16进制
 **/
+(NSString *)DecimalStringIsConvertedToHexdecimalString:(NSString *)string;
/**
 *  16进制转data
 */
+(NSData *)convertHexStrToData:(NSString *)str;
/**
 *  data转16进制
 */
+ (NSString *)convertDataToHexStr:(NSData *)data;
/**
 *  秒数 转 时秒
 */
+ (NSString *)totalSeconfsConvertHourMinuiteSeconds:(int  )second;
//获取当前时间
/**
 *  根据需要格式获取当前时间 YYYY/MM/dd hh:mm:ss:SS
 */
+ (NSString *)currentDateStrWithDateFormatterStyle:(NSString *)string;

//获取当前时间戳
+ (NSString *)getCurrentTimeStr;

// 时间戳转时间,时间戳为13位是精确到毫秒的，10位精确到秒
+ (NSString *)getDateStringWithTimeStr:(NSString *)str WithDateFormatterStyle:(NSString *)dateFString;

//字符串转时间戳 如：2017-4-10 17:15:10
+ (NSString *)getTimeStrWithString:(NSString *)str WithDateFormatterStyle:(NSString *)dateFString;
@end

NS_ASSUME_NONNULL_END
