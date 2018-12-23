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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DFULibrary",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, DFUError, closed) {
  DFUErrorRemoteSuccess = 1,
  DFUErrorRemoteInvalidState = 2,
  DFUErrorRemoteNotSupported = 3,
  DFUErrorRemoteDataExceedsLimit = 4,
  DFUErrorRemoteCrcError = 5,
  DFUErrorRemoteOperationFailed = 6,
/// Providing the DFUFirmware is required.
  DFUErrorFileNotSpecified = 101,
/// Given firmware file is not supported.
  DFUErrorFileInvalid = 102,
/// Since SDK 7.0.0 the DFU Bootloader requires the extended Init Packet. For more details, see:
/// http://infocenter.nordicsemi.com/topic/com.nordic.infocenter.sdk5.v11.0.0/bledfu_example_init.html?cp=4_0_0_4_2_1_1_3
  DFUErrorExtendedInitPacketRequired = 103,
/// Before SDK 7.0.0 the init packet could have contained only 2-byte CRC value, and was optional.
/// Providing an extended one instead would cause CRC error during validation (the bootloader assumes that the 2 first bytes
/// of the init packet are the firmware CRC).
  DFUErrorInitPacketRequired = 104,
  DFUErrorFailedToConnect = 201,
  DFUErrorDeviceDisconnected = 202,
  DFUErrorServiceDiscoveryFailed = 301,
  DFUErrorDeviceNotSupported = 302,
  DFUErrorReadingVersionFailed = 303,
  DFUErrorEnablingControlPointFailed = 304,
  DFUErrorWritingCharacteristicFailed = 305,
  DFUErrorReceivingNotificatinoFailed = 306,
  DFUErrorUnsupportedResponse = 307,
/// Error called during upload when the number of bytes sent is not equal to number of bytes confirmed in Packet Receipt Notification.
  DFUErrorBytesLost = 308,
};

@class DFUFirmwareSize;
enum DFUFirmwareType : uint8_t;

/// The DFUFirmware object wraps the firmware file.
SWIFT_CLASS("_TtC10DFULibrary11DFUFirmware")
@interface DFUFirmware : NSObject
/// The name of the firmware file.
@property (nonatomic, readonly, copy) NSString * _Null_unspecified fileName SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmware.fileName' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// The URL to the firmware file.
@property (nonatomic, readonly, copy) NSURL * _Null_unspecified fileUrl SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmware.fileUrl' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Information whether the firmware was successfully initialized.
@property (nonatomic, readonly) BOOL valid SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmware.valid' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// The size of each component of the firmware.
@property (nonatomic, readonly, strong) DFUFirmwareSize * _Nonnull size SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmware.size' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Number of connectinos required to transfer the firmware. This does not include the connection needed to switch to the DFU mode.
@property (nonatomic, readonly) NSInteger parts SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmware.parts' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param urlToZipFile URL to the Distribution packet (ZIP)
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToZipFile:(NSURL * _Nonnull)urlToZipFile SWIFT_DEPRECATED_OBJC("Swift initializer 'DFUFirmware.init(urlToZipFile:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Creates the DFU Firmware object from a Distribution packet (ZIP). Such file must contain a manifest.json file
/// with firmware metadata and at least one firmware binaries. Read more about the Distribution packet on
/// the DFU documentation.
/// \param urlToZipFile URL to the Distribution packet (ZIP)
///
/// \param type the type of the firmware to use
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToZipFile:(NSURL * _Nonnull)urlToZipFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'DFUFirmware.init(urlToZipFile:type:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Creates the DFU Firmware object from a BIN or HEX file. Setting the DAT file with an Init packet is optional,
/// but may be required by the bootloader.
/// \param urlToBinOrHexFile URL to a BIN or HEX file with the firmware
///
/// \param urlToDatFile optional URL to a DAT file with the Init packet
///
/// \param type The type of the firmware
///
///
/// returns:
/// the DFU firmware object or null in case of an error
- (nullable instancetype)initWithUrlToBinOrHexFile:(NSURL * _Nonnull)urlToBinOrHexFile urlToDatFile:(NSURL * _Nullable)urlToDatFile type:(enum DFUFirmwareType)type OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'DFUFirmware.init(urlToBinOrHexFile:urlToDatFile:type:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10DFULibrary15DFUFirmwareSize")
@interface DFUFirmwareSize : NSObject
@property (nonatomic, readonly) uint32_t softdevice SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmwareSize.softdevice' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly) uint32_t bootloader SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmwareSize.bootloader' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly) uint32_t application SWIFT_DEPRECATED_OBJC("Swift property 'DFUFirmwareSize.application' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// The type of the BIN or HEX file.
/// <ul>
///   <li>
///     Softdevice:           Firmware file will be sent as a new Softdevice
///   </li>
///   <li>
///     Bootloader:           Firmware file will be sent as a new Bootloader
///   </li>
///   <li>
///     Application:          Firmware file will be sent as a new application
///   </li>
/// </ul>
typedef SWIFT_ENUM(uint8_t, DFUFirmwareType, closed) {
  DFUFirmwareTypeSoftdevice = 1,
  DFUFirmwareTypeBootloader = 2,
  DFUFirmwareTypeApplication = 4,
  DFUFirmwareTypeSoftdeviceBootloader = 3,
  DFUFirmwareTypeSoftdeviceBootloaderApplication = 7,
};

@class CBPeripheral;
@class NSNumber;
@class CBUUID;

/// The DFU Target matcher is used when both the Softdevice (or Softdevice and Bootloader) and Application
/// are going to be updated.
/// This library supports sending both BIN files from a ZIP Distribution Packet automatically.
/// However, when sending the Softdevice update, the DFU Bootloader removes the current application in order to
/// make space for the new Softdevice firmware. When the new Softdevice is flashed the bootloader restarts the device
/// and, as there is no application anymore, starts advertising in DFU Bootloader mode.
/// Since SDK 8.0.0, to solve caching problem on a host, the bootloader starts to advertise with an address incremented by 1.
/// The DFU Library has to scan for a peripheral with this new address. However, as iOS does not expose the device
/// address in the public CoreBluetooth API, address matching, used on Android, can not be used.
/// Instead, this matcher is used. The DFU Service will start scanning for peripherals with a UUID filter, where
/// the list of required UUID is returned by the <code>filterBy()</code> method. If your device in the Bootloader mode
/// does not advertise with any service UUIDs, or this is not enough, you may select a target device
/// by their advertising packet or RSSI.
SWIFT_PROTOCOL("_TtP10DFULibrary21DFUPeripheralSelector_")
@protocol DFUPeripheralSelector
/// Returns whether the given peripheral is a device in DFU Bootloader mode.
/// \param peripheral the peripheral to be checked
///
/// \param advertisingData scanned advertising data
///
/// \param RSSI received signal strength indication in dBm
///
///
/// returns:
/// true (YES) if given peripheral is what service is looking for
- (BOOL)select:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI SWIFT_WARN_UNUSED_RESULT;
/// Returns an optional list of services that the scanner will use to filter advertising packets
/// when scanning for a device in DFU Bootloader mode. To find out what UUID you should return,
/// switch your device to DFU Bootloader mode (with a button!) and check the advertisment packet.
/// The result of this method will be applied to
/// <code>centralManager.scanForPeripheralsWithServices([CBUUID]?, options: [String : AnyObject]?)</code>
///
/// returns:
/// an optional list of services or nil
- (NSArray<CBUUID *> * _Nullable)filterBy SWIFT_WARN_UNUSED_RESULT;
@end


/// The progress delegates may be used to notify user about progress updates.
/// The only method of the delegate is only called when the service is in the Uploading state.
SWIFT_PROTOCOL("_TtP10DFULibrary19DFUProgressDelegate_")
@protocol DFUProgressDelegate
/// Callback called in the <code>State.Uploading</code> state. Gives detailed information about the progress
/// and speed of transmission. This method is always called at least two times (for 0% and 100%)
/// if upload has started and did not fail.
/// This method is called in the main thread and is safe to update any UI.
/// \param part number of part that is currently being transmitted. Parts start from 1
/// and may have value either 1 or 2. Part 2 is used only when there were Soft Device and/or
/// Bootloader AND an Application in the Distribution Packet and the DFU target does not
/// support sending all files in a single connection. First the SD and/or BL will be sent, then
/// the service will disconnect, reconnect again to the (new) bootloader and send the Application.
///
/// \param totalParts total number of parts that are to be send (this is always equal to 1 or 2).
///
/// \param progress the current progress of uploading the current part in percentage (values 0-100).
/// Each value will be called at most once - in case of a large file a value e.g. 3% will be called only once,
/// despite that it will take more than one packet to reach 4%. In case of a small firmware file
/// some values may be ommited. For example, if firmware file would be only 20 bytes you would get
/// a callback 0% (called always) and then 100% when done.
///
/// \param currentSpeedBytesPerSecond the current speed in bytes per second
///
/// \param avgSpeedBytesPerSecond the average speed in bytes per second
///
- (void)onUploadProgress:(NSInteger)part totalParts:(NSInteger)totalParts progress:(NSInteger)progress currentSpeedBytesPerSecond:(double)currentSpeedBytesPerSecond avgSpeedBytesPerSecond:(double)avgSpeedBytesPerSecond;
@end


/// A controller object used to pause, resume or abort the DFU operation. Check methods documentation
/// for more information.
SWIFT_CLASS("_TtC10DFULibrary20DFUServiceController")
@interface DFUServiceController : NSObject
/// Call this method to pause uploading during the transmition process. The transmition can be resumed
/// only when connection remains. If service has already started sending firmware data it will pause after receiving
/// next Packet Receipt Notification. Otherwise it will continue to send Op Codes and pause before sending the first bytes
/// of the firmware. With Packet Receipt Notifications disabled it is the only moment when upload may be paused.
- (void)pause SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceController.pause()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Call this method to resume the paused transffer, otherwise does nothing.
- (void)resume SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceController.resume()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Aborts the upload. The phone will disconnect from peripheral. The peripheral will try to
/// recover the last firmware. Might, restart in the Bootloader mode if the application has been
/// removed.
/// Abort (Reset) command will be sent instead of a next Op Code, or after receiving a
/// Packet Receipt Notification. It PRM procedure is disabled it will continue until the whole
/// firmware is sent and then Reset will be sent instead of Verify Firmware op code.
- (void)abort SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceController.abort()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Starts again aborted DFU operation.
- (void)restart SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceController.restart()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Returns true if DFU operation has been paused.
@property (nonatomic, readonly) BOOL paused SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceController.paused' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Returns true if DFU operation has been aborted.
@property (nonatomic, readonly) BOOL aborted SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceController.aborted' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum State : NSInteger;

/// The service delegate reports about state changes and errors.
SWIFT_PROTOCOL("_TtP10DFULibrary18DFUServiceDelegate_")
@protocol DFUServiceDelegate
/// Callback called when state of the DFU Service has changed.
/// This method is called in the main thread and is safe to update any UI.
/// \param state the new state fo the service
///
- (void)didStateChangedTo:(enum State)state;
/// Called after an error occurred.
/// The device will be disconnected and DFU operation has been aborted.
/// This method is called in the main thread and is safe to update any UI.
/// \param error the error code
///
/// \param message error description
///
- (void)didErrorOccur:(enum DFUError)error withMessage:(NSString * _Nonnull)message;
@end

@protocol LoggerDelegate;
@class CBCentralManager;

/// The DFUServiceInitiator object should be used to send a firmware update to a remote BLE target compatible
/// with the Nordic Semiconductor’s DFU (Device Firmware Update).
/// A <code>delegate</code> and <code>logger</code> may be specified to be informed about the status.
SWIFT_CLASS("_TtC10DFULibrary19DFUServiceInitiator")
@interface DFUServiceInitiator : NSObject
/// The service delegate is an object that will be notified about state changes of the DFU Service.
/// Setting it is optional but recommended.
@property (nonatomic, weak) id <DFUServiceDelegate> _Nullable delegate SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.delegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// An optional progress delegate will be called only during upload. It notifies about current upload
/// percentage and speed.
@property (nonatomic, weak) id <DFUProgressDelegate> _Nullable progressDelegate SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.progressDelegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// The logger is an object that should print given messages to the user. It is optional.
@property (nonatomic, weak) id <LoggerDelegate> _Nullable logger SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.logger' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// The selector object is used during sending a firmware containing a Softdevice (or Softdevice and Bootloader)
/// and the Application. After flashing the first part (containing the Softdevice), the device restarts in the
/// DFU Bootloader mode and may (since SDK 8.0.0) start advertising with an address incremented by 1.
/// The peripheral specified in the <code>init</code> may no longer be used as there is no device advertising with its address.
/// The DFU Service will scan for a new device and connect to the first device returned by the selector.
/// The default selecter returns the first device with the DFU Service UUID in the advertising packet.
/// Ignore this property if not updating Softdevice and Application from one ZIP file.
@property (nonatomic, strong) id <DFUPeripheralSelector> _Nonnull peripheralSelector SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.peripheralSelector' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// The number of packets of firmware data to be received by the DFU target before sending
/// a new Packet Receipt Notification (control point notification with Op Code = 7).
/// If this value is 0, the packet receipt notification will be disabled by the DFU target.
/// Default value is 12. Higher values, or disabling it, may speed up the upload process,
/// but also cause a buffer overflow and hang the Bluetooth adapter.
@property (nonatomic) uint16_t packetReceiptNotificationParameter SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.packetReceiptNotificationParameter' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Setting this property to true will prevent from jumping to the DFU Bootloader
/// mode in case there is no DFU Version characteristic. Use it if the DFU operation can be handled by your
/// device running in the application mode. If the DFU Version characteristic exists, the
/// information whether to begin DFU operation, or jump to bootloader, is taken from the
/// characteristic’s value. The value returned equal to 0x0100 (read as: minor=1, major=0, or version 0.1)
/// means that the device is in the application mode and buttonless jump to DFU Bootloader is supported.
/// Currently, the following values of the DFU Version characteristic are supported:
/// <em>No DFU Version characteristic</em> - one of the first implementations of DFU Service. The device
/// may support only Application update (version from SDK 4.3.0), may support Soft Device, Bootloader
/// and Application update but without buttonless jump to bootloader (SDK 6.0.0) or with
/// buttonless jump (SDK 6.1.0).
/// The DFU Library determines whether the device is in application mode or in DFU Bootloader mode
/// by counting number of services: if no DFU Service found - device is in app mode and does not support
/// buttonless jump, if the DFU Service is the only service found (except General Access and General Attribute
/// services) - it assumes it is in DFU Bootloader mode and may start DFU immediately, if there is
/// at least one service except DFU Service - the device is in application mode and supports buttonless
/// jump. In the lase case, you want to perform DFU operation without jumping - call the setForceDfu(force:Bool)
/// method with parameter equal to true.
/// <em>0.1</em> - Device is in a mode that supports buttonless jump to the DFU Bootloader
/// <em>0.5</em> - Device can handle DFU operation. Extended Init packet is required. Bond information is lost
/// in the bootloader mode and after updating an app. Released in SDK 7.0.0.
/// <em>0.6</em> - Bond information is kept in bootloader mode and may be kept after updating application
/// (DFU Bootloader must be configured to preserve the bond information).
/// <em>0.7</em> - The SHA-256 firmware hash is used in the Extended Init Packet instead of CRC-16.
/// This feature is transparent for the DFU Service.
/// <em>0.8</em> - The Extended Init Packet is signed using the private key. The bootloader, using the public key,
/// is able to verify the content. Released in SDK 9.0.0 as experimental feature.
/// Caution! The firmware type (Application, Bootloader, SoftDevice or SoftDevice+Bootloader) is not
/// encrypted as it is not a part of the Extended Init Packet. A change in the protocol will be required
/// to fix this issue.
/// By default the DFU Library will try to switch the device to the DFU Bootloader mode if it finds
/// more services then one (DFU Service). It assumes it is already in the bootloader mode
/// if the only service found is the DFU Service. Setting the forceDfu to true (YES) will prevent from
/// jumping in these both cases.
@property (nonatomic) BOOL forceDfu SWIFT_DEPRECATED_OBJC("Swift property 'DFUServiceInitiator.forceDfu' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Creates the DFUServiceInitializer that will allow to send an update to the given peripheral.
/// The peripheral should be disconnected prior to calling start() method.
/// The DFU service will automatically connect to the device, check if it has required DFU
/// service (return a delegate callback if does not have such), jump to the DFU Bootloader mode
/// if necessary and perform the DFU. Proper delegate methods will be called during the process.
/// seealso:
/// peripheralSelector property - a selector used when scanning for a device in DFU Bootloader mode
/// in case you want to update a Softdevice and Application from a single ZIP Distribution Packet.
/// \param central manager that will be used to connect to the peripheral 
///
/// \param target the DFU target peripheral
///
///
/// returns:
/// the initiator instance
- (nonnull instancetype)initWithCentralManager:(CBCentralManager * _Nonnull)centralManager target:(CBPeripheral * _Nonnull)target OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'DFUServiceInitiator.init(centralManager:target:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Sets the file with the firmware. The file must be specified before calling <code>start()</code> method,
/// and must not be nil.
/// \param file The firmware wrapper object
///
///
/// returns:
/// the initiator instance to allow chain use
- (DFUServiceInitiator * _Nonnull)withFirmwareFile:(DFUFirmware * _Nonnull)file SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceInitiator.withFirmwareFile(_:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Starts sending the specified firmware to the DFU target.
/// When started, the service will automatically connect to the target, switch to DFU Bootloader mode
/// (if necessary), and send all the content of the specified firmware file in one or two connections.
/// Two connections will be used if a ZIP file contains a Soft Device and/or Bootloader and an Application.
/// First the Soft Device and/or Bootloader will be transferred, then the service will disconnect, reconnect to
/// the (new) Bootloader again and send the Application (unless the target supports receiving all files in a single
/// connection).
/// The current version of the DFU Bootloader, due to memory limitations, may receive together only a Softdevice and Bootloader.
///
/// returns:
/// n object that can be used to controll the DFU operation.
- (DFUServiceController * _Nullable)start SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'DFUServiceInitiator.start()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// Log level. Logger application may filter log entries based on their level. Levels allow to ignore less important messages.
/// warning:
/// -     Important messages.
/// <ul>
///   <li>
///     Debug -       Lowest priority. Usually names of called methods or callbacks received.
///   </li>
///   <li>
///     Verbose -     Low priority messages what the service is doing.
///   </li>
///   <li>
///     Info -        Messages about completed tasks.
///   </li>
///   <li>
///     Application - Messages about application level events, in this case DFU messages in human-readable form.
///   </li>
///   <li>
///     Error -       Highest priority messages with errors.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, LogLevel, closed) {
  LogLevelDebug = 0,
  LogLevelVerbose = 1,
  LogLevelInfo = 5,
  LogLevelApplication = 10,
  LogLevelWarning = 15,
  LogLevelError = 20,
};


/// The Logger delegate.
SWIFT_PROTOCOL("_TtP10DFULibrary14LoggerDelegate_")
@protocol LoggerDelegate
/// This method is called whenever a new log entry is to be saved. The logger implementation should save this or present it to the user.
/// It is NOT safe to update any UI from this method as multiple threads may log.
/// \param level the log level
///
/// \param message the message
///
- (void)logWith:(enum LogLevel)level message:(NSString * _Nonnull)message;
@end

/// The state of the DFU Service.
/// <ul>
///   <li>
///     Connecting:      Service is connecting to the DFU target
///   </li>
///   <li>
///     Starting:        DFU Service is initializing DFU operation
///   </li>
///   <li>
///     EnablingDfuMode: Service is switching the device to DFU mode
///   </li>
///   <li>
///     Uploading:       Service is uploading the firmware
///   </li>
///   <li>
///     Validating:      The DFU target is validating the firmware
///   </li>
///   <li>
///     Disconnecting:   The iDevice is disconnecting or waiting for disconnection
///   </li>
///   <li>
///     Completed:       THe DFU operation is completed and successful
///   </li>
///   <li>
///     Aborted:         DFU Operation was aborted
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, State, closed) {
  StateConnecting = 0,
  StateStarting = 1,
  StateEnablingDfuMode = 2,
  StateUploading = 3,
  StateValidating = 4,
  StateDisconnecting = 5,
  StateCompleted = 6,
  StateAborted = 7,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
