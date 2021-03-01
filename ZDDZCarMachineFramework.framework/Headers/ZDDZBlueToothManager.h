//
//  ZDDZBlueToothManager.h
//  CarLive2020
//
//  Created by 徐伟新 on 2021/2/24.
//  Copyright © 2021 zhongdaodianzi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <UIKit/UIKit.h>
#import "ZDDZDataTool.h"

NS_ASSUME_NONNULL_BEGIN

@class CarMachineModel;

typedef void(^ScanDecicesBlock)(NSArray *deviceArray);
typedef void(^receiveDataBlock)(CarMachineModel *model);

@interface ZDDZBlueToothManager : NSObject

@property (nonatomic, copy) ScanDecicesBlock deviceBlock;
@property (nonatomic, copy) receiveDataBlock dataBlock;
@property (nonatomic, strong) CarMachineModel *model;

+ (instancetype)shareInstance;
/*
 ** 搜索设备
 **/
- (void)scanDevices;
/*
 ** 停止搜索设备
 **/
- (void)stopScanDevice;
/*
 ** 连接设备
 **/
- (void)connectDeviceWithPeripheral:(CBPeripheral *)peripheral;
/*
 ** 连接设备
 **/
- (void)disconnectDeviceWithPeripheral:(CBPeripheral *)peripheral;
- (void)sendDataWithHexString:(NSString *)hexString;

@end

@interface CarMachineModel : NSObject
/*  0101电源开关 **/
@property (nonatomic, assign) BOOL power;
/* 0201播放  0202暂停 **/
@property (nonatomic, assign) BOOL isPlay;
/* 0802~080n 播放模式 00 是poweroff**/
@property (nonatomic, assign) NSInteger playModel;
/* 音量 **/
@property (nonatomic, assign) NSInteger volumn;
/* 总音量 **/
@property (nonatomic, assign) NSInteger totalVolumn;
/* 0b 00正常 01流行 02摇滚 03爵士 04古典 05乡村 **/
@property (nonatomic, assign) NSInteger eqModel;
/* rgb模式 0e开头 00没有rgb 01rgb 02rg 03gb 04rb**/
@property (nonatomic, assign) NSInteger rgbType;
@property (nonatomic, assign) NSInteger colorType;
/* f001就是dsp 其他普通EQ**/
@property (nonatomic, assign) BOOL isDsp;
/* basValue 0a01value **/
@property (nonatomic, assign) NSInteger basValue;
/* treValue 0a02value **/
@property (nonatomic, assign) NSInteger treValue;
/* balValue 0a03value **/
@property (nonatomic, assign) NSInteger balValue;
/* fadValue 0a04value **/
@property (nonatomic, assign) NSInteger fadValue;
/* 0d01xxxx FM频道值 <8750为AM  其他/100为FM**/
@property (nonatomic, strong) NSString *FMValue;
/* 0d02xxxx 台号信息**/
@property (nonatomic, strong) NSString *platformValue;
/* 0c02xxxxxxx usb歌曲名信息**/
@property (nonatomic, strong) NSString *usbMusicMessage;
/* 0c02xxxxxxx usb歌曲名信息 根据播放模式判断是USB还是SD**/
@property (nonatomic, strong) NSString *musicMessage;
/* 是否 mute  0901静音 0900正常**/
@property (nonatomic, assign) BOOL isMute;
/* DAB1001 first second third**/
@property (nonatomic, strong) NSString *dabFirst;
@property (nonatomic, strong) NSString *dabSecond;
@property (nonatomic, strong) NSString *dabThird;
/* DAB2001 7段  频段band号(0-6) 数值(0-14)  频段名称（2个字节）**/
@property (nonatomic, assign) NSInteger dabBand0;
@property (nonatomic, assign) NSInteger dabBand1;
@property (nonatomic, assign) NSInteger dabBand2;
@property (nonatomic, assign) NSInteger dabBand3;
@property (nonatomic, assign) NSInteger dabBand4;
@property (nonatomic, assign) NSInteger dabBand5;
@property (nonatomic, assign) NSInteger dabBand6;
@property (nonatomic, strong) NSString *dabBandName0;
@property (nonatomic, strong) NSString *dabBandName1;
@property (nonatomic, strong) NSString *dabBandName2;
@property (nonatomic, strong) NSString *dabBandName3;
@property (nonatomic, strong) NSString *dabBandName4;
@property (nonatomic, strong) NSString *dabBandName5;
@property (nonatomic, strong) NSString *dabBandName6;
/* dab 2002 ifx 类型**/
@property (nonatomic, assign) NSInteger ifxType;
@property (nonatomic, strong) NSString *musicNumber;
@property (nonatomic, assign) NSInteger volumnUpdateNumber;

@end


NS_ASSUME_NONNULL_END
