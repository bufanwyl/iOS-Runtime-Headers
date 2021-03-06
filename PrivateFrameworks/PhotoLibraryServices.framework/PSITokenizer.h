/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITokenizer : NSObject {
    NSCharacterSet *_excludedSingleCharacterSet;
}

- (void)dealloc;
- (id)init;
- (id)newTokensFromString:(id)arg1 withOptions:(int)arg2 outCopyRanges:(id*)arg3;
- (void)tokenizeString:(id)arg1 withOptions:(int)arg2 tokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; int x4; int x5; struct { /* ? */ } *x6; int x7; int x8; }*)arg3;

@end
