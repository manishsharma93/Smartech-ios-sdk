/*
 @header NetCoreNotificationService.h
 
 @brief This is the header file where my super-code is contained.
 
 NetCoreNotificationService : - use to provides the entry point for a Notification Service
 
 @author NetCore
 @copyright  2018 NetCore
 @version    2.2.0
 */

#import <UserNotifications/UserNotifications.h>
#import <UserNotifications/UNNotificationContent.h>
#import <UserNotificationsUI/UserNotificationsUI.h>
#import <UIKit/UIKit.h>

@interface NetCoreNotificationService : UNNotificationServiceExtension

+ (instancetype)sharedInstance;

- (void)didReceiveNotificationRequest:(UNNotificationRequest *)request withContentHandler:(void (^)(UNNotificationContent *))contentHandler;

-(void)serviceExtensionTimeWillExpire;

@end

