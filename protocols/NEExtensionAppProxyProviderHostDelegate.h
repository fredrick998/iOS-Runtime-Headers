/* Generated by RuntimeBrowser.
 */

@protocol NEExtensionAppProxyProviderHostDelegate <NEExtensionTunnelProviderHostDelegate>

@required

- (void)extension:(void *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NEExtensionAppProxyProviderHostContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)extension:(void *)arg1 didRequestMatchAppPID:(void *)arg2 uuid:(void *)arg3 withAppRule:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NEExtensionAppProxyProviderHostContext *, int, NSUUID *, NEAppRule *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*

@end
