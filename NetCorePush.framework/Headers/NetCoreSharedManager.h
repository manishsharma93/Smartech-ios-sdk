/*
 @header NetCoreSharedManager.h
 
 @brief This is the header file where my super-code is contained.
 
   NetCoreSharedManager is singleton class use to setup application id and Application version
 
 @author NetCore
 @copyright  2016 NetCore
 @version    2.1.1
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/*
 @class NetCoreSharedManager
 
 @brief The NetCoreSharedManager class
 
 @discussion
 NetCoreSharedManager is singleton class use to setup application id and Application version
 
 @superclass SuperClass: NSObject
 @classdesign    No special design is applied here.
 @helps It helps no other classes.
 @helper    No helper exists for this class.
 */
@interface NetCoreSharedManager : NSObject
/*
 @Method sharedInstance:- use to return NetCoreSharedManager manage class Object
 @return NetCoreSharedManager instance
 */
+ (instancetype)sharedInstance;
/*
 @Method setUpApplicationId: this method use to setup application id and Version
 @param  strApplicationId - contain applicatioId
 */
-(void)setUpApplicationId:(NSString *)strApplicationId;

/*
 @Method setDeviceToken: this method use to set device toekn
 @param  data - contain push device token data
 */
-(void)setDeviceToken:(NSData *)data;
/*
 @Method getDeviceToken: this method use to get device toekn
 @return - Data
 */
-(NSData *)getDeviceToken;
/*
 @Method setUpIdentity: this method use to setup identity  
 @param  strIdentity - contain strIdentity
 */
-(void)setUpIdentity:(NSString *)strIdentity;
/*
 @Method getIdentity: this method use to get user dentity
 @return - string
 */
-(NSString *)getIdentity;

 @end
