/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTickShader : SKShader {
    UIColor * _backgroundColor;
    SKUniform * _backgroundColorUniform;
    SKUniform * _filterUniform;
    float  _filterWidth;
    float  _tickWidth;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) float filterWidth;
@property (nonatomic, readonly) float tickWidth;

+ (id)shaderWithTickWidth:(float)arg1 filterWidth:(float)arg2;

- (void).cxx_destruct;
- (id)backgroundColor;
- (float)filterWidth;
- (id)init;
- (id)initWithTickWidth:(float)arg1 filterWidth:(float)arg2;
- (void)setBackgroundColor:(id)arg1;
- (float)tickWidth;

@end