//
//  speakerView.m
//  easyVideo
//
//  Created by quanhao huang on 2018/9/10.
//  Copyright © 2018年 easyVideo. All rights reserved.
//

#import "speakerView.h"

@implementation speakerView

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    // Drawing code here.
    [self setBackgroundColor:WHITECOLOR];
    self.layer.cornerRadius = 4.;
}

@end
