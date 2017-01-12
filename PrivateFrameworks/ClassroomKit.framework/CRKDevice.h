/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _activeAirPlayRoute;
    BOOL  _appLocked;
    NSArray * _availableAirPlayRoutes;
    unsigned long long  _availableBytes;
    float  _batteryLevel;
    NSString * _buildVersion;
    int  _chargingState;
    int  _deviceOrientation;
    BOOL  _ephemeralMultiUser;
    NSString * _identifier;
    NSArray * _installedApplications;
    int  _interfaceOrientation;
    int  _lockState;
    int  _loginState;
    NSString * _managementLockPasscode;
    NSString * _model;
    NSString * _name;
    BOOL  _orientationLocked;
    BOOL  _passcodeEnabled;
    int  _platform;
    NSString * _primaryOpenApplication;
    int  _screenState;
    NSString * _secondaryOpenApplication;
    NSString * _serialNumber;
    BOOL  _supervised;
    NSString * _systemName;
    NSString * _systemVersion;
    NSString * _userDisplayName;
    NSString * _userFamilyName;
    NSString * _userGivenName;
    NSString * _userIdentifier;
    NSString * _userImageURL;
    float  _volume;
}

@property (nonatomic, copy) NSDictionary *activeAirPlayRoute;
@property (getter=isAppLocked, nonatomic) BOOL appLocked;
@property (nonatomic, copy) NSArray *availableAirPlayRoutes;
@property (nonatomic) unsigned long long availableBytes;
@property (nonatomic) float batteryLevel;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic) int chargingState;
@property (nonatomic) int deviceOrientation;
@property (getter=isEphemeralMultiUser, nonatomic) BOOL ephemeralMultiUser;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *installedApplications;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic) int lockState;
@property (nonatomic) int loginState;
@property (nonatomic, copy) NSString *managementLockPasscode;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isOrientationLocked, nonatomic) BOOL orientationLocked;
@property (getter=isPasscodeEnabled, nonatomic) BOOL passcodeEnabled;
@property (nonatomic) int platform;
@property (nonatomic, copy) NSString *primaryOpenApplication;
@property (nonatomic) int screenState;
@property (nonatomic, copy) NSString *secondaryOpenApplication;
@property (nonatomic, copy) NSString *serialNumber;
@property (getter=isSupervised, nonatomic) BOOL supervised;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic, copy) NSString *userDisplayName;
@property (nonatomic, copy) NSString *userFamilyName;
@property (nonatomic, copy) NSString *userGivenName;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *userImageURL;
@property (nonatomic) float volume;

+ (id)allPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeAirPlayRoute;
- (id)availableAirPlayRoutes;
- (unsigned long long)availableBytes;
- (float)batteryLevel;
- (id)buildVersion;
- (int)chargingState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceOrientation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)installedApplications;
- (int)interfaceOrientation;
- (BOOL)isAppLocked;
- (BOOL)isEphemeralMultiUser;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (BOOL)isOrientationLocked;
- (BOOL)isPasscodeEnabled;
- (BOOL)isSupervised;
- (int)lockState;
- (int)loginState;
- (id)managementLockPasscode;
- (id)model;
- (id)name;
- (int)platform;
- (id)primaryOpenApplication;
- (int)screenState;
- (id)secondaryOpenApplication;
- (id)serialNumber;
- (void)setActiveAirPlayRoute:(id)arg1;
- (void)setAppLocked:(BOOL)arg1;
- (void)setAvailableAirPlayRoutes:(id)arg1;
- (void)setAvailableBytes:(unsigned long long)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setChargingState:(int)arg1;
- (void)setDeviceOrientation:(int)arg1;
- (void)setEphemeralMultiUser:(BOOL)arg1;
- (void)setInstalledApplications:(id)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLockState:(int)arg1;
- (void)setLoginState:(int)arg1;
- (void)setManagementLockPasscode:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrientationLocked:(BOOL)arg1;
- (void)setPasscodeEnabled:(BOOL)arg1;
- (void)setPlatform:(int)arg1;
- (void)setPrimaryOpenApplication:(id)arg1;
- (void)setScreenState:(int)arg1;
- (void)setSecondaryOpenApplication:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSupervised:(BOOL)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setUserDisplayName:(id)arg1;
- (void)setUserFamilyName:(id)arg1;
- (void)setUserGivenName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserImageURL:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)systemName;
- (id)systemVersion;
- (id)userDisplayName;
- (id)userFamilyName;
- (id)userGivenName;
- (id)userIdentifier;
- (id)userImageURL;
- (float)volume;

@end