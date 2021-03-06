/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfLayoutData : NSObject {
    float _columnSpacing;
    NSMutableArray *_columnWidths;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    int _numberOfRows;
    float *_rowHeights;
}

@property (nonatomic, readonly) float columnSpacing;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (nonatomic, readonly) int numberOfColumns;
@property (nonatomic, readonly) int numberOfRows;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } totalContentSize;

- (void).cxx_destruct;
- (float)columnSpacing;
- (float)columnWidthForIndex:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (void)enumerateColumnsUsingBlock:(id /* block */)arg1;
- (void)enumerateRowsUsingBlock:(id /* block */)arg1;
- (id)initWithNumberOfRows:(int)arg1 columnSpacing:(float)arg2;
- (int)numberOfColumns;
- (int)numberOfRows;
- (void)reloadWithItemCount:(int)arg1 sizeBlock:(id /* block */)arg2;
- (float)rowHeightForIndex:(int)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeForItemAtIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })totalContentSize;

@end
