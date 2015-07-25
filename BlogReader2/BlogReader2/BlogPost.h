//
//  BlogPost.h
//  BlogReader2
//
//  Created by Dean Laurea on 7/24/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject
    
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;


//Designated Initializer
- (id) initWithTitle:(NSString *) title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;

@end
