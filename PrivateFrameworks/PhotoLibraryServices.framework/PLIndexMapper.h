/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLIndexMapper : NSObject {
    <PLIndexMapperDataSource> * _dataSource;
}

- (BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (unsigned int)backingIndexForIndex:(unsigned int)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned int)indexForBackingIndex:(unsigned int)arg1;
- (id)indexesForBackingIndexes:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end
