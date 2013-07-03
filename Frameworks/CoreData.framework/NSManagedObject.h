/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSManagedObjectID, NSManagedObjectContext;

@interface NSManagedObject : NSObject  {
    int _cd_rc;
    unsigned long _cd_stateFlags;
    id _cd_rawData;
    id _cd_entity;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    unsigned long _cd_extraFlags;
    id _cd_observationInfo;
    id *_cd_snapshots;
    unsigned long _cd_lockingInfo;
    id _cd_queueReference;
}

+ (BOOL)_hasOverriddenAwake;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (void)_initializePrimitiveAccessorStubs;
+ (void)_initializeAccessorStubs;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (struct { int x1; void *x2; unsigned long x3; unsigned char x4; unsigned int x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 26; } x9; }*)_PFMOClassFactoryData;
+ (BOOL)_isGeneratedClass_1;
+ (BOOL)_useFastValidationMethod;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)_PFPlaceHolderSingleton_core;
+ (char *)_transientPropertiesChangesMask__;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (id)_PFPlaceHolderSingleton;
+ (Class)classForEntity:(id)arg1;
+ (BOOL)_isGeneratedClass;
+ (void)_entityDeallocated;
+ (id)allocWithEntity:(id)arg1;
+ (void)_release_1;
+ (id)_retain_1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (void)release;
+ (id)retain;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)isTracked;

- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (id)_changedTransientProperties__;
- (id)_newCommittedSnapshotValues;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newSnapshotForUndo__;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newChangedValuesForRefresh__;
- (id)_referenceQueue__;
- (void)_setOriginalSnapshot__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setVersionReference__:(unsigned int)arg1;
- (unsigned int)_versionReference__;
- (id)_changedValuesForCurrentEvent;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (void)_setLastSnapshot__:(id)arg1;
- (unsigned int)_stateFlags;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (BOOL)_isUnprocessedInsertion__;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (BOOL)_isPendingInsertion__;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (BOOL)_isSuppressingKVO__;
- (BOOL)_isSuppressingChangeNotifications__;
- (void)_clearAllChanges__;
- (void)_clearUnprocessedChanges__;
- (BOOL)_hasUnprocessedChanges__;
- (void)_clearPendingChanges__;
- (BOOL)_hasPendingChanges;
- (BOOL)_hasAnyObservers__;
- (BOOL)wasForgotten;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (void)_propagateDelete:(unsigned int)arg1;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned int)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (BOOL)_isKindOfEntity:(id)arg1;
- (id)_transientProperties__;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPropertiesForRetainedTypes:(unsigned int*)arg1 andCopiedTypes:(unsigned int*)arg2 preserveFaults:(BOOL)arg3;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (id)_lastSnapshot__;
- (BOOL)hasPersistentChangedValues;
- (void)didRefresh:(BOOL)arg1;
- (void)willRefresh:(BOOL)arg1;
- (id)changedValuesForCurrentEvent;
- (unsigned int)faultingState;
- (id)changedValues;
- (id)committedValuesForKeys:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForDelete:(id*)arg1;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)awakeFromInsert;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (BOOL)isUpdated;
- (int)_batch_release__;
- (id)_reservedCurrentEventSnapshot;
- (id)_persistentProperties__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_originalSnapshot__;
- (id)_allProperties__;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (BOOL)_validateForSave:(id*)arg1;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (BOOL)isDeleted;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned int)arg4 error:(id*)arg5;
- (void)didAccessValueForKey:(id)arg1;
- (BOOL)_isUnprocessedUpdate__;
- (BOOL)_isPendingUpdate__;
- (id)_descriptionValues;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (BOOL)_hasRetainedStoreResources__;
- (BOOL)_isPendingDeletion__;
- (BOOL)_isUnprocessedDeletion__;
- (void)didTurnIntoFault;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)willTurnIntoFault;
- (BOOL)isInserted;
- (void)awakeFromFetch;
- (void)didFireFault;
- (void)willFireFault;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (BOOL)_isValidRelationshipDestination__;
- (void)willAccessValueForKey:(id)arg1;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (BOOL)hasChanges;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned int)arg1 newValue:(id)arg2;
- (id)entity;
- (BOOL)isFault;
- (id)_faultHandler__;
- (id)managedObjectContext;
- (id)objectID;
- (id)init;
- (int (*)())methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setObservationInfo:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (BOOL)implementsSelector:(SEL)arg1;
- (id)_implicitObservationInfo;
- (id)observationInfo;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2;
- (void)setValuesWithObject:(id)arg1;
- (id)_removeObsoleteKeysFromDictionary:(id)arg1;
- (id)_obsoleteAttributes;
- (void)encodeWithCoder:(id)arg1;

@end