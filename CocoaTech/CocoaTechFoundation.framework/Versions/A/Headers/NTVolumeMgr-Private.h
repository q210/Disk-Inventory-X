//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CocoaTechFoundation/NTVolumeMgr.h>

@interface NTVolumeMgr (Private)
+ (id)mountedVolumesUsingUnix:(BOOL)arg1;
- (void)setVolumes:(id)arg1;
- (void)resetVolumesFolderDesc;
- (void)volumeMountedNotification:(id)arg1;
- (void)startVolumeScanThread;
- (void)volumeThreadNotification:(id)arg1;
- (void)incrementVolumeListID;
- (unsigned long long)volumeListID;
- (void)setVolumeListIsValid:(BOOL)arg1;
- (BOOL)volumeListIsValid;
- (void)sendVolumeMountedNotifications;
@end
