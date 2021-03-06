//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLKITx_GMVDetector.h"

@class MLKITx_GMVLogger;

@interface MLKITx_GMVTextDetector : MLKITx_GMVDetector
{
    MLKITx_GMVLogger *_logger;
}

+ (double)reverseOriented:(long long)arg1 forRotationAngle:(double)arg2;
+ (unsigned long long)reverseOrientedOriginIndex:(long long)arg1;
+ (id)reverseRotateBoundingBox:(id)arg1 withRotatedCornerPoints:(id)arg2 toOrientation:(long long)arg3 withWidth:(double)arg4 withHeight:(double)arg5;
+ (id)reverseRotateCornerPoints:(id)arg1 toOrientation:(long long)arg2 withWidth:(double)arg3 withHeight:(double)arg4;
+ (id)buildTextBlockArrayFromLines:(const vector_0a9b862e *)arg1;
+ (id)buildTextBlockFromLines:(const vector_74e00ca0 *)arg1;
+     // Error parsing type: @24@0:8r^{LineBox=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<ocr::photo::WordBox>=^{Arena}ii^{Rep}}{RepeatedPtrField<ocr::photo::CharNodeScores>=^{Arena}ii^{Rep}}{RepeatedPtrField<ocr::photo::ConfidenceComponent>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{BoundingBox}^{BoundingBox}^{DetectionBox}^{BoundingBox}^{Lattice}ffiiBBBiiiifi}16, name: buildTextLineFeature:
+     // Error parsing type: @24@0:8r^{WordBox=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<ocr::photo::SymbolBox>=^{Arena}ii^{Rep}}{RepeatedPtrField<ocr::photo::CharNodeScores>=^{Arena}ii^{Rep}}{RepeatedPtrField<ocr::photo::ConfidenceComponent>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{BoundingBox}^{BoundingBox}fBBBBiiiiififfiBi}16, name: buildTextElementFeature:
+ (struct CGRect)rectFromCorners:(id)arg1;
+     // Error parsing type: @24@0:8r^{BoundingBox=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{CurvedBoundingBox}iiiif}16, name: buildCornerPoints:
+ (id)detector:(id)arg1;
@property(retain, nonatomic) MLKITx_GMVLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)featuresInBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2;
- (id)textsInImageBufferData:(id)arg1 colorModel:(int)arg2 startDate:(id)arg3 width:(double)arg4 height:(double)arg5 options:(id)arg6 orientation:(long long)arg7 format:(int)arg8;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

