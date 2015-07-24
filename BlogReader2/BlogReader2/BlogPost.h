//
//  BlogPost.h
//  BlogReader2
//
//  Created by Dean Laurea on 7/24/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject {

    NSString *title;
    NSString *author;
    
}

- (void) setTitle:(NSString *) title; //setter
-(NSString *) title; //getter

@end
