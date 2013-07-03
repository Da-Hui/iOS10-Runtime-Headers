/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry  {
    struct CsRect<int> { int x1[4]; } *mGeometryCoordSpace;
    struct CsPoint<int> { int x1[2]; } *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}


- (struct CsPoint<int> { int x1[2]; })limo;
- (void)setLimo:(struct CsPoint<int> { int x1[2]; })arg1;
- (void)addTextBodyRect:(id)arg1;
- (void)addFormula:(id)arg1;
- (id)formulaAtIndex:(unsigned int)arg1;
- (unsigned int)formulaCount;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x1[4]; })arg1;
- (unsigned int)pathCount;
- (void)addPath:(id)arg1;
- (struct CsRect<int> { int x1[4]; })geometryCoordSpace;
- (id)textBodyRectAtIndex:(unsigned int)arg1;
- (unsigned int)textBodyRectCount;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end