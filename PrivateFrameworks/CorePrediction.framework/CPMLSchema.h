/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLSchema : NSObject {
    NSMutableArray * _categoricalDataList;
    NSMutableArray * _indexColumnList;
    NSMutableArray * _matchReplaceValue;
    NSMutableArray * _replaceMissingValue;
    NSMutableArray * attribute;
    NSMutableArray * availableOptions;
    NSMutableArray * nsRemapTable;
    NSMutableArray * schema;
    NSMutableArray * schemaHDef;
    NSMutableString * schemaHeader;
    NSMutableString * schemaHeaderWithType;
    int  yColumnPosition;
}

@property (nonatomic, readonly) NSMutableArray *attribute;
@property (nonatomic, readonly) NSMutableArray *availableOptions;
@property (nonatomic, readonly) NSMutableArray *indexColumnList;
@property (nonatomic, readonly) NSMutableArray *nsRemapTable;
@property (nonatomic, readonly) NSMutableString *schemaHeader;
@property (nonatomic, readonly) NSMutableString *schemaHeaderWithType;

- (void).cxx_destruct;
- (id)attribute;
- (id)availableOptions;
- (id)getColumnName:(unsigned int)arg1;
- (int)getColumnPosition:(id)arg1;
- (int)getSchemaType:(unsigned int)arg1;
- (id)getSubstituteValue:(unsigned int)arg1;
- (unsigned int)getTotalAttributes;
- (id)getUserDefinedCategoricalData:(unsigned int)arg1;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned int)arg1;
- (int)getVectorContent:(unsigned int)arg1;
- (int)getYColumnPosition;
- (BOOL)hasOptions:(unsigned int)arg1;
- (id)indexColumnList;
- (id)init:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (BOOL)isColumnContinous:(unsigned long)arg1;
- (BOOL)isIntType:(unsigned int)arg1;
- (BOOL)isNumType:(unsigned int)arg1;
- (BOOL)isRealType:(unsigned int)arg1;
- (BOOL)isStringType:(unsigned int)arg1;
- (BOOL)isVectorType:(unsigned int)arg1;
- (BOOL)matchSubstituteValue:(unsigned int)arg1 theValue:(id)arg2;
- (id)nsRemapTable;
- (id)schemaHeader;
- (id)schemaHeaderWithType;

@end
