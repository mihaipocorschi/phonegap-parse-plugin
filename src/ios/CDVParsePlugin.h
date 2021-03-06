#import <Cordova/CDV.h>
#import "AppDelegate.h"

@interface CDVParsePlugin: CDVPlugin

- (void)initialize: (CDVInvokedUrlCommand*)command;
- (void)getInstallationId: (CDVInvokedUrlCommand*)command;
- (void)getInstallationObjectId: (CDVInvokedUrlCommand*)command;
- (void)getSubscriptions: (CDVInvokedUrlCommand *)command;
- (void)subscribe: (CDVInvokedUrlCommand *)command;
- (void)unsubscribe: (CDVInvokedUrlCommand *)command;
- (void)setCurrentUser: (CDVInvokedUrlCommand *)command;
- (void)setInstallationUser: (CDVInvokedUrlCommand *)command;
- (void)resetBadge: (CDVInvokedUrlCommand *)command;
- (void)trackEvent: (CDVInvokedUrlCommand *)command;

@end

@interface AppDelegate (CDVParsePlugin)
- (void)handleRemoteNotification:(UIApplication *)application payload:(NSDictionary *)payload;
@end
