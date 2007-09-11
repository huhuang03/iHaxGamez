/*
 iHaxHamez - External process memory search-and-replace tool for MAC OS X
 Copyright (C) <2007>  <Raymond Wilfong>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
 You may contact Raymond Wilfong by email at rwilfong@rewnet.com
 */

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
@class SearchWindowController;


@interface AppAddressDataSource : NSObject
{
    NSMutableArray *appAddresses;
    SearchWindowController* searchWindowController;
}

- (id)init;
- (void)dealloc;

- (NSMutableArray *)appAddresses;
- (void)setAppAddresses:(NSMutableArray *)newAppAddresses;
- (SearchWindowController *)searchWindowController;
- (void)setSearchWindowController:(SearchWindowController *)SWC;

- (int)numberOfRowsInTableView:(NSTableView *)tableView;
- (id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(int)row;
- (void)tableView:(NSTableView *)tableView setObjectValue:(id)object forTableColumn:(NSTableColumn *)tableColumn row:(int)row;
- (void)addAppAddressDataRec:(int)address val:(NSString *)val;
- (void)removeAllObjects;

@end
