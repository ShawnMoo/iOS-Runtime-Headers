/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFVector : NSObject <IFVector> {
    unsigned int  _length;
    double * _vector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property unsigned int length;
@property (readonly) Class superclass;
@property double*vector;

+ (id)ones:(unsigned int)arg1;
+ (id)vectorWithElements:(double*)arg1 length:(unsigned int)arg2;
+ (id)zeros:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithLength:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVector:(id)arg1;
- (unsigned int)length;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)performOperation:(id)arg1 other:(id)arg2;
- (double)performScalarOperation:(id)arg1 other:(id)arg2;
- (void)setLength:(unsigned int)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)setVector:(double*)arg1;
- (double*)vector;

@end
