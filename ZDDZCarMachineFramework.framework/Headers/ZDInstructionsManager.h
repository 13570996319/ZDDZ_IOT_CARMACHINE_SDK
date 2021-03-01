//
//  ZDInstructionsManager.h
//  CarLive_One
//
//  Created by 徐伟新 on 2021/1/19.
//

#import <Foundation/Foundation.h>
#import "ZDDZBlueToothManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZDInstructionsManager : NSObject

/*  获取同步 **/
+ (void)sendGlobal;
/* 更改播放模式 **/
+ (void)sendPlayModal;
/* 同步时间  **/
+ (void)synchronousCurrentDate;
/* 短按power键 **/
+ (void)shortPowerClick;
/* 长按power键**/
+ (void)longPowerClick;
/* 数字按键1-6点击**/
+ (void)numberButtonClick:(NSInteger)number;
/* 短按上一首 **/
+ (void)shortLastMusicButtonClicked;
/* 长按上一首 **/
+ (void)longLastMusicButtonClicked;
/* 短按下一首 **/
+ (void)shortNextMusicButtonClicked;
/* 长按下一首 **/
+ (void)longNextMusicButtonClicked;
/* 上十首 **/
+ (void)lastTenMusicButtonClicked;
/* 下十首 **/
+ (void)nextTenMusicButtonClicked;
/* 选曲 **/
+ (void)selectMusicWithNumber:(NSInteger)number;
/* lastHold长按开始 **/
+ (void)lastClickHoldStart;
/* lastHold长按持续 **/
+ (void)lastClickHoldHolding;
/* lastHold长按结束 **/
+ (void)lastClickHoldEnd;
/* nextHold长按开始 **/
+ (void)nextClickHoldStart;
/* nextHold长按持续 **/
+ (void)nextClickHoldHolding;
/* nextHold长按结束 **/
+ (void)nextClickHoldEnd;
/* 设置音量**/
+ (void)setVolumnWith:(NSInteger)volumn;
/* loud关闭 **/
+ (void)closeLoud;
/* loud开启 **/
+ (void)openLoud;
/*歌曲播放方式 全部循环**/
+ (void)totalLoopMusicPlay;
/*歌曲播放方式 浏览播放**/
+ (void)browseMusicPlay;
/*歌曲播放方式 单曲循环播放**/
+ (void)singleLoopMusicPlay;
/*歌曲播放方式 随机播放**/
+ (void)randomMusicPlay;

/* band切频段 **/
+ (void)bandInstrctions;
/* AMS(自动搜台) **/
+ (void)AMSInstrctions;
/* 浏览播放电台 **/
+ (void)bowsePlayFM;
/* mute/set **/
+ (void)muteInstrctions;
/* eq:bas值设置 0~14 对应-7~7 **/
+ (void)basInstrctionsWithValue:(NSInteger)value;
/* eq:tre值设置 0~14 对应-7~7 **/
+ (void)treInstrctionsWithValue:(NSInteger)value;
/* eq:bal值设置 0~14 对应-7~7 **/
+ (void)balInstrctionsWithValue:(NSInteger)value;
/* eq:fad值设置 0~14 对应-7~7 **/
+ (void)fadInstrctionsWithValue:(NSInteger)value;
/* 设置eq模式 (正常/流行/摇滚/古典/爵士/乡村)**/
+ (void)setEQModalInstrctionsWith:(NSInteger)value;

/* rgb模式设置 1.R 2.G 3.B 4.rg 5.gb 6.rb 7.rgb 8auto**/
+ (void)rgbInstrctionsSetwith:(NSInteger)value;
/* dsp频率设置 type:0~6(频段号) value:0~14(频段值)**/
+ (void)dspInstrctionsSetWithType:(NSInteger)type withValue:(NSInteger)value;
/* ifx类型选择**/
+ (void)ifxInstrctionsSelectWith:(NSInteger)value;
/* 播放**/
+ (void)playInstrctions;
/* 暂停 **/
+ (void)stopInstrctions;
@end

NS_ASSUME_NONNULL_END
