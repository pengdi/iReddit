//
//  SubredditDataModel.h
//  iReddit
//
//  Created by Ryan Bruels on 7/21/10.
//  Copyright 2010 DevToaster, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Three20/Three20.h"

@interface SubredditDataModel : TTURLRequestModel
{
    NSString *_subreddit;
    NSMutableArray *_stories;
    
    int newsModeIndex;
    
    BOOL canLoadMore;
    NSInteger totalStories;
}
@property (nonatomic, readonly) NSString *subreddit;
@property (nonatomic, readonly) NSMutableArray *stories;

@property (nonatomic, assign) int newsModeIndex;

- (id)initWithSubreddit:(NSString *)subreddit;
- (NSString *)newsModeString;
- (int)totalStories;

@end