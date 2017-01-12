/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionExpiry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned int  _type;
    int  _value;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) int value;

+ (id)expireAfter:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 value:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)type;
- (int)value;

@end