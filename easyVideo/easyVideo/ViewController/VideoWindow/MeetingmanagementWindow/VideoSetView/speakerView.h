//
//  speakerView.h
//  easyVideo
//
//  Created by quanhao huang on 2018/9/10.
//  Copyright © 2018年 easyVideo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SWSTAnswerButton.h"

@interface speakerView : NSView

@property (weak) IBOutlet NSTextField *speakerName;
@property (weak) IBOutlet SWSTAnswerButton *selectBtn;
@property (weak) IBOutlet NSImageView *selectImage;

@end
