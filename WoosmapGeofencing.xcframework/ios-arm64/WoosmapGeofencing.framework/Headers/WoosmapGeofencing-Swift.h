#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef WOOSMAPGEOFENCING_SWIFT_H
#define WOOSMAPGEOFENCING_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import Realm;
@import WoosmapGeofencingCore;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WoosmapGeofencing",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Interacts with Core Location to collect user location and monitor region.
/// This class efficiently gathers user location and triggers events based on region monitoring and provides categorised zones of Interests and temporal clusters.
SWIFT_CLASS("_TtC17WoosmapGeofencing19LocationServiceImpl")
@interface LocationServiceImpl : LocationServiceCoreImpl
@end

@class NSDate;
@class NSString;

/// Offline Database object: RegionIsochrone
SWIFT_CLASS("_TtC17WoosmapGeofencing15RegionIsochrone")
@interface RegionIsochrone : RealmSwiftObject
/// date
@property (nonatomic, copy) NSDate * _Nullable date;
/// didEnter
@property (nonatomic) BOOL didEnter;
/// identifier
@property (nonatomic, copy) NSString * _Nullable identifier;
/// locationId
@property (nonatomic, copy) NSString * _Nullable locationId;
/// idStore
@property (nonatomic, copy) NSString * _Nullable idStore;
/// latitude
@property (nonatomic) double latitude;
/// longitude
@property (nonatomic) double longitude;
/// radius
@property (nonatomic) NSInteger radius;
/// fromPositionDetection
@property (nonatomic) BOOL fromPositionDetection;
/// distance
@property (nonatomic) NSInteger distance;
/// distanceText
@property (nonatomic, copy) NSString * _Nonnull distanceText;
/// duration
@property (nonatomic) NSInteger duration;
/// durationText
@property (nonatomic, copy) NSString * _Nonnull durationText;
/// type
@property (nonatomic, copy) NSString * _Nonnull type;
/// expectedAverageSpeed
@property (nonatomic) double expectedAverageSpeed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Woosmap Geofencing SDK
/// The Woosmap Geofencing SDK allows you to monitor Geofences, track your user’s location and connect with the Woosmap Search and Distance APIs.
SWIFT_CLASS("_TtC17WoosmapGeofencing17WoosmapGeofencing")
@interface WoosmapGeofencing : NSObject
/// Access singleton of Now object
/// Usage Example:
/// \code
/// let obj = WoosmapGeofencing.shared
///
/// \endcode
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) WoosmapGeofencing * _Nonnull shared;)
+ (WoosmapGeofencing * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Initialize of WoosmapGeofencing
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Location service Connector
/// Usage Example:
/// \code
/// let locationService: LocationServiceImpl = WoosmapGeofencing.shared.getLocationService()
///
/// \endcode
/// returns:
/// LocationService
- (LocationServiceImpl * _Nonnull)getLocationService SWIFT_WARN_UNUSED_RESULT;
/// Activate location service to capture device location
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.initServices()
///
/// \endcode
- (void)initServices SWIFT_METHOD_FAMILY(none);
/// Activate tracking with SDK
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setTrackingEnable(enable: true)
///
/// \endcode\param enable True/False
///
- (void)setTrackingEnableWithEnable:(BOOL)enable;
/// Fetch tracking status in SDK
/// Usage Example:
/// \code
/// let state = WoosmapGeofencing.shared.getTrackingState()
///
/// \endcode
/// returns:
/// True/False
- (BOOL)getTrackingState SWIFT_WARN_UNUSED_RESULT;
/// Configure Woosmap API with SDK
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setWoosmapAPIKey(key: "<Woosmap Key>")
///
/// \endcode\param key API key
///
- (void)setWoosmapAPIKeyWithKey:(NSString * _Nonnull)key;
/// Configure Google map key with SDK
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setGMPAPIKey(key: "<custom GMS Key>")
///
/// \endcode\param key Google Map key from google api console
///
- (void)setGMPAPIKeyWithKey:(NSString * _Nonnull)key;
/// Custom endpoint for Woosmap Search API
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for Search API
///
- (void)setSearchWoosmapAPIWithApi:(NSString * _Nonnull)api;
/// Custom endpoint for Woosmap Distance API
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setDistanceWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for Distance API
///
- (void)setDistanceWoosmapAPIWithApi:(NSString * _Nonnull)api;
/// Custom endpoint for Woosmap Traffic API
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setTrafficDistanceWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for traffic API
///
- (void)setTrafficDistanceWoosmapAPIWithApi:(NSString * _Nonnull)api;
/// Configure distance API language
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setDistanceAPILanguage(language: "fr")
///
/// \endcode\param language language with ISO 639-1 codes
///
- (void)setDistanceAPILanguageWithLanguage:(NSString * _Nonnull)language;
/// Filter Max Air Distance
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setDistanceMaxAirDistanceFilter(distance: 120)
///
/// \endcode\param distance numaric value in specify DistanceAPIUnits
///
- (void)setDistanceMaxAirDistanceFilterWithDistance:(NSInteger)distance;
/// Filter distance time
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setDistanceTimeFilter(time: 120)
///
/// \endcode\param time number of second
///
- (void)setDistanceTimeFilterWithTime:(NSInteger)time;
/// Filter POI location with CurrentPosition
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setCurrentPositionFilter(distance: 10, time: 120)
///
/// \endcode\param distance distance specify with unit
///
/// \param time number of seconds
///
- (void)setCurrentPositionFilterWithDistance:(double)distance time:(NSInteger)time;
/// switch to enable Search API Request
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchAPIRequestEnable(enable:true)
///
/// \endcode\param enable True to enable search API, False to disable search API
///
- (void)setSearchAPIRequestEnableWithEnable:(BOOL)enable;
/// Fetch activation status  search api  with SDK
/// Usage Example:
/// \code
/// let  status = WoosmapGeofencing.shared.getSearchAPIRequestEnable()
///
/// \endcode
/// returns:
/// Yes/No
- (BOOL)getSearchAPIRequestEnable SWIFT_WARN_UNUSED_RESULT;
/// switch to enable auto region creation when search api called
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchAPICreationRegionEnable(enable:true)
///
/// \endcode\param enable True/False
///
- (void)setSearchAPICreationRegionEnableWithEnable:(BOOL)enable;
/// Get status of enabling auto region creation when search API called
/// Usage Example:
/// \code
/// let  status = WoosmapGeofencing.shared.getSearchAPICreationRegionEnable()
///
/// \endcode
/// returns:
/// True/False
- (BOOL)getSearchAPICreationRegionEnable SWIFT_WARN_UNUSED_RESULT;
/// Search API Last Request Time Stamp
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchAPILastRequestTimeStamp(time:now())
///
/// \endcode\param time Capture last search api get caled from SDK
///
- (void)setSearchAPILastRequestTimeStampWithTime:(double)time;
/// Fetch Search API Last Request Time Stamp
/// Usage Example:
/// \code
/// let  lastTimeStamp = WoosmapGeofencing.shared.getSearchAPILastRequestTimeStamp()
///
/// \endcode
/// returns:
/// Capture last search api get caled from SDK
- (double)getSearchAPILastRequestTimeStamp SWIFT_WARN_UNUSED_RESULT;
/// Switch Distance API Request Enable
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setDistanceAPIRequestEnable(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setDistanceAPIRequestEnableWithEnable:(BOOL)enable;
/// Fetch Distance API Request Enable with SDK
/// Usage Example:
/// \code
/// let status = WoosmapGeofencing.shared.getDistanceAPIRequestEnable()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getDistanceAPIRequestEnable SWIFT_WARN_UNUSED_RESULT;
/// Search API Filter parameters
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchAPIFilter(distance: 10, time: 120)
///
/// \endcode\param distance radius for search boundry
///
/// \param time time for search boundry
///
- (void)setSearchAPIFilterWithDistance:(double)distance time:(NSInteger)time;
/// Configure SearchAPI Refresh Delay Day
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSearchAPIRefreshDelayDay(day: 5)
///
/// \endcode\param day Number of days
///
- (void)setSearchAPIRefreshDelayDayWithDay:(NSInteger)day;
/// Fetch SearchAPI Refresh Delay Day
/// Usage Example:
/// \code
/// let days = WoosmapGeofencing.shared.getSearchAPIRefreshDelayDay()
///
/// \endcode
/// returns:
/// Number of days. Default: 1 day
- (NSInteger)getSearchAPIRefreshDelayDay SWIFT_WARN_UNUSED_RESULT;
/// Configure visit enable with SDK
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setVisitEnable(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setVisitEnableWithEnable:(BOOL)enable;
/// Fetch visit enable with SDK
/// Usage Example:
/// \code
/// let status = WoosmapGeofencing.shared.getVisitEnable()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getVisitEnable SWIFT_WARN_UNUSED_RESULT;
/// Configure Accuracy Visit Filter
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setAccuracyVisitFilter(accuracy:true)
///
/// \endcode\param accuracy Unit meters
///
- (void)setAccuracyVisitFilterWithAccuracy:(double)accuracy;
/// Switch to enable Zone of interest with SDK
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setCreationOfZOIEnable(enable:true)
///
/// \endcode\param enable True / False
///
- (void)setCreationOfZOIEnableWithEnable:(BOOL)enable;
/// Configuration classificaton
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setClassification(enable:true)
///
/// \endcode\param enable True / False
///
- (void)setClassificationWithEnable:(BOOL)enable;
/// Configure Radius Detection ClassifiedZOI
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setRadiusDetectionClassifiedZOI(radius:10.5)
///
/// \endcode\param radius Radius in meter
///
- (void)setRadiusDetectionClassifiedZOIWithRadius:(double)radius;
/// Enable location monitoring in Foreground
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.startMonitoringInForeGround()
///
/// \endcode
- (void)startMonitoringInForeGround;
/// Call this method from the DidFinishLaunchWithOptions method of your App Delegate
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.startMonitoringInBackground()
///
/// \endcode
- (void)startMonitoringInBackground;
/// Call this method from the applicationDidBecomeActive method of your App Delegate
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.didBecomeActive()
///
/// \endcode
- (void)didBecomeActive;
/// Switch to change tracking mode
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.trackingChanged(tracking: true)
///
/// \endcode\param tracking True / False
///
- (void)trackingChangedWithTracking:(BOOL)tracking;
/// Configure high frequency mode with location service
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setModeHighfrequencyLocation(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setModeHighfrequencyLocationWithEnable:(BOOL)enable;
/// Fetch high frequency mode of location service
/// Usage Example:
/// \code
///  let status = WoosmapGeofencing.shared.getModeHighfrequencyLocation()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getModeHighfrequencyLocation SWIFT_WARN_UNUSED_RESULT;
/// Refresh Location to fetch new location explicitly
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.refreshLocation(allTime: true)
///
/// \endcode\param allTime Enable HighfrequencyLocation mode
///
- (void)refreshLocationWithAllTime:(BOOL)allTime;
/// Collect SearchAPI Parameters
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setSearchAPIParameters(["property1":"<custom value>",
///                             "property2":"<custom value>"])
///
/// \endcode\param parameters API parameter list
///
- (void)setSearchAPIParametersWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters;
/// Configure User Properties Filter
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setUserPropertiesFilter(["property1",
///                             "property2"])
///
/// \endcode\param properties Filter properties
///
- (void)setUserPropertiesFilterWithProperties:(NSArray<NSString *> * _Nonnull)properties;
/// Configure SFMC Credentials
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.setSFMCCredentials(["authenticationBaseURI":"<custom value>",
///    "restBaseURI":"<custom value>",
///    "client_id":"<custom value>",
///    "client_secret":"<custom value>",
///    "regionEnteredEventDefinitionKey":"<custom value>",
///    "regionExitedEventDefinitionKey":"<custom value>",
///    "poiEventDefinitionKey":"<custom value>",
///    "zoiClassifiedEnteredEventDefinitionKey":"<custom value>",
///    "zoiClassifiedExitedEventDefinitionKey":"<custom value>",
///    "visitEventDefinitionKey":"<custom value>"])
///
/// \endcode\param credentials SFMC Credentials settings
///
- (void)setSFMCCredentialsWithCredentials:(NSDictionary<NSString *, NSString *> * _Nonnull)credentials;
/// Configure radius of POI region
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.setPoiRadius(10)
///
/// \endcode\param radius numbers
///
- (void)setPoiRadiusWithRadius:(id _Nonnull)radius;
/// Configuration to set optimize distance logic. default: false
/// Usage Example:
/// \code
///  WoosmapGeofencing.shared.OptimizeDistanceRequest = true
///
/// \endcode
@property (nonatomic) BOOL OptimizeDistanceRequest;
@end


@interface WoosmapGeofencing (SWIFT_EXTENSION(WoosmapGeofencing))
/// Disable tracking on SDK
/// Usage Example:
/// \code
/// WoosmapGeofencing.shared.stopTracking()
///
/// \endcode
- (void)stopTracking;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
