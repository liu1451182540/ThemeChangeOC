//
//  ThemeLabel.h
//  ThemeChangeOC
//
//  Created by KP_LGX on 16/3/31.
//  Copyright © 2016年 KP_LGX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ThemeLabel : UILabel

@property (nonatomic,copy) NSString *colorName;

- (id)initWithColorName:(NSString *)colorName;

@end
