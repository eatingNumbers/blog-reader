//
//  BlogPost.m
//  BlogReader2
//
//  Created by Dean Laurea on 7/24/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString *) title {
    
    self = [super init];
    
    if (self) {
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
        
    }
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title{
    return [[self alloc] initWithTitle:title];
}

- (NSURL *) thumbnailURL {
    NSLog(@"%@", [self.thumbnail class]);
    return [NSURL URLWithString:self.thumbnail];
}






@end
