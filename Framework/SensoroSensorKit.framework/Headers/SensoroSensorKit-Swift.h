// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SensoroSensorKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, ConfigPhase, closed) {
  ConfigPhaseConnect = 0,
  ConfigPhaseConfigurate = 1,
  ConfigPhaseComplete = 2,
  ConfigPhaseFailed = 3,
};

typedef SWIFT_ENUM(NSInteger, DeviceUpgradeStatus, closed) {
  DeviceUpgradeStatusReady = 0,
  DeviceUpgradeStatusEnteringDFU = 1,
  DeviceUpgradeStatusDfuTransfering = 2,
  DeviceUpgradeStatusValidating = 3,
  DeviceUpgradeStatusDisconnecting = 4,
  DeviceUpgradeStatusTimeout = 5,
  DeviceUpgradeStatusCompleted = 6,
  DeviceUpgradeStatusFailed = 7,
  DeviceUpgradeStatusRecall = 8,
};

/// the index to get value from SensoroDevice
/// <ul>
///   <li>
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SensorIndex, closed) {
  SensorIndexIdx_SN = 0,
  SensorIndexIdx_RSSI = 1,
  SensorIndexIdx_HardwareVer = 2,
  SensorIndexIdx_FirmwareVer = 3,
  SensorIndexIdx_BatteryLevel = 4,
  SensorIndexIdx_Temperature = 5,
  SensorIndexIdx_Humidity = 6,
  SensorIndexIdx_Light = 7,
  SensorIndexIdx_Accelerator = 8,
  SensorIndexIdx_Custom = 9,
  SensorIndexIdx_Leak = 10,
  SensorIndexIdx_CO = 11,
  SensorIndexIdx_CO2 = 12,
  SensorIndexIdx_NO2 = 13,
  SensorIndexIdx_CH4 = 14,
  SensorIndexIdx_LPG = 15,
  SensorIndexIdx_PM1 = 16,
  SensorIndexIdx_PM2_5 = 17,
  SensorIndexIdx_PM10 = 18,
  SensorIndexIdx_Cover = 19,
  SensorIndexIdx_LiquidLevel = 20,
  SensorIndexIdx_SO2 = 21,
  SensorIndexIdx_NH3 = 22,
  SensorIndexIdx_TVOC = 23,
  SensorIndexIdx_Smoke = 24,
  SensorIndexIdx_O3 = 25,
  SensorIndexIdx_Angle = 26,
  SensorIndexIdx_Pitch = 27,
  SensorIndexIdx_Roll = 28,
  SensorIndexIdx_Yaw = 29,
  SensorIndexIdx_Flame = 30,
  SensorIndexIdx_Artificial_Gas = 31,
  SensorIndexIdx_MPA = 32,
  SensorIndexIdx_Unknown = 33,
};


/// the type to present a sensor value. it can be convert to string value,
/// float value, int value, NSData value .etc if it is possible.
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC16SensoroSensorKit11SensorValue")
@interface SensorValue : NSObject
@property (nonatomic, readonly) enum SensorIndex idx;
@property (nonatomic, readonly) BOOL hasValue;
/// The sensor’s value expressed as a int. (read-only),
/// <em>discussion</em>
/// if the instance cannot be convert to int, this property will return a Int.max, for example, None, SN, Custom;
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly) NSInteger intValue;
/// The sensor’s value expressed as a float. (read-only),
/// <em>discussion</em>
/// if the instance cannot be convert to float, this property will return a NaN, for example, None, SN, Custom;
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly) float floatValue;
/// The sensor’s value expressed as a string. (read-only),
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly, copy) NSString * _Nonnull stringValue;
/// The sensor’s value expressed as a NSData. (read-only), only Custom can express as a NSData. other will return a nil.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly, copy) NSData * _Nullable dataValue;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class CBPeripheral;
@class NSData;

/// a sensor device, you can get sensor value that is parsed from device’s broadcast info.
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC16SensoroSensorKit13SensoroDevice")
@interface SensoroDevice : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// get sensor’s value, if there is not value, return .None.
/// <ul>
///   <li>
///   </li>
/// </ul>
- (SensorValue * _Nonnull)getValue:(enum SensorIndex)index SWIFT_WARN_UNUSED_RESULT;
/// return all values received at current time.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly, copy) NSArray<SensorValue *> * _Nonnull values;
/// return if the device is in Range.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL isDeviceInRange;
/// return if the sensor of device is in Range.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL isSensorInRange;
/// return if the device is connected.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly, strong) CBPeripheral * _Nullable peripheral;
- (void)startSessionWithPassword:(NSString * _Nonnull)password completion:(void (^ _Nonnull)(NSError * _Nullable))completion notify:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))notify;
- (void)stopSession;
- (void)writeWithData:(NSData * _Nonnull)data writeCallback:(void (^ _Nonnull)(NSError * _Nullable))writeCallback;
@end






@interface SensoroDevice (SWIFT_EXTENSION(SensoroSensorKit))
- (void)writeChannelMaskWithPassword:(NSString * _Nonnull)password channelMask:(NSArray<NSNumber *> * _Nonnull)channelMask completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
- (void)writeFiresInitDataWithPassword:(NSString * _Nonnull)password initialValue:(uint32_t)initialValue type:(NSString * _Nonnull)type completion:(void (^ _Nonnull)(NSError * _Nullable))completion status:(void (^ _Nullable)(enum ConfigPhase))status;
@end


@interface SensoroDevice (SWIFT_EXTENSION(SensoroSensorKit))
- (void)upgradeWithPassword:(NSString * _Nonnull)password firmware:(NSString * _Nonnull)path progressWatcher:(void (^ _Nullable)(double))progress stateWatcher:(void (^ _Nonnull)(enum DeviceUpgradeStatus, NSError * _Nullable))watcher;
- (void)stopUpgrade;
- (BOOL)isUpgrading SWIFT_WARN_UNUSED_RESULT;
@end

@protocol SensoroDeviceManagerDelegate;

SWIFT_CLASS("_TtC16SensoroSensorKit20SensoroDeviceManager")
@interface SensoroDeviceManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SensoroDeviceManager * _Nonnull sharedInstance;)
+ (SensoroDeviceManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)startScan;
- (void)stopScan;
/// the delegate to receive the events
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, strong) id <SensoroDeviceManagerDelegate> _Nullable delegate;
/// the devices that was found by manager. sorted by RSSI.
/// <ul>
///   <li>
///   </li>
/// </ul>
@property (nonatomic, readonly, copy) NSArray<SensoroDevice *> * _Nonnull devices;
@end


/// The SensoroDeviceManagerDelegate protocol defines the methods that a delegate of a SensoroDeviceManager object must adopt.
/// All method is required.
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_PROTOCOL("_TtP16SensoroSensorKit28SensoroDeviceManagerDelegate_")
@protocol SensoroDeviceManagerDelegate
/// Invoked when a new sensor device was found.
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param manager manager which found these devices.
///
/// \param devices new found devices.
///
///
/// returns:
///
/// Nothing
- (void)deviceManager:(SensoroDeviceManager * _Nonnull)manager newDevices:(NSArray<SensoroDevice *> * _Nonnull)devices;
/// Invoked when a sensor device disappeared.
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param manager manager which’s device disappeared.
///
/// \param devices disappeared devices.
///
///
/// returns:
///
/// Nothing
- (void)deviceManager:(SensoroDeviceManager * _Nonnull)manager goneDevices:(NSArray<SensoroDevice *> * _Nonnull)devices;
/// Tells the delegate that one or more beacons are found.
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     manager: manager which’s device disappeared.
///   </li>
///   <li>
///     devices: found devices.
///   </li>
/// </ul>
/// <ul>
///   <li>
///   </li>
/// </ul>
///
/// returns:
///
/// Nothing
- (void)deviceManager:(SensoroDeviceManager * _Nonnull)manager didRangeDevices:(NSArray<SensoroDevice *> * _Nonnull)devices;
@end


SWIFT_CLASS("_TtC16SensoroSensorKit14SignalTestItem")
@interface SignalTestItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
