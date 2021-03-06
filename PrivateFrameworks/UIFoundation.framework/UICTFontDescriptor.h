/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UICTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(float)arg2;

- (unsigned long)_cfTypeID;
- (BOOL)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;

@end
