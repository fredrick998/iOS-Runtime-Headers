/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaylistEntry : MPModelObject {
    MPModelPlaylist * _playlist;
    int  _position;
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic) int position;
@property (nonatomic, retain) MPModelSong *song;

+ (id)__MPModelPropertyPlaylistEntryPosition__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntryPlaylist__PROPERTY;
+ (id)__MPModelRelationshipPlaylistEntrySong__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__position__KEY;
+ (id)__song__KEY;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;

- (void).cxx_destruct;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })libraryAddStatusObserverConfiguration;
- (int)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (int)position;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setPlaylist:(id)arg1;
- (void)setPosition:(int)arg1;
- (void)setSong:(id)arg1;
- (id)song;

@end
