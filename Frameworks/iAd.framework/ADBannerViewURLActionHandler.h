/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSURL, <ADBannerViewURLActionHandlerDelegate>, NSDictionary;

@interface ADBannerViewURLActionHandler : NSObject {
    <ADBannerViewURLActionHandlerDelegate> *_delegate;
    NSDictionary *_dialogOverrides;
    BOOL _shouldReply;
    NSURL *_url;
}

@property <ADBannerViewURLActionHandlerDelegate> *delegate;
@property(retain) NSDictionary *dialogOverrides;
@property(retain) NSURL *url;
@property BOOL shouldReply;

+ (id)bannerViewURLActionHandlerWithURL:(id)arg1 dialogOverrides:(id)arg2 delegate:(id)arg3 shouldReply:(BOOL)arg4;

- (void)dealloc;
- (id)delegate;
- (id)dialogOverrides;
- (void)handle;
- (id)normalizedURL;
- (void)setDelegate:(id)arg1;
- (void)setDialogOverrides:(id)arg1;
- (void)setShouldReply:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (BOOL)shouldReply;
- (id)url;

@end