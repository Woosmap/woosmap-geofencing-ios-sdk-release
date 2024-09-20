#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0 effective-5.10 (swiftlang-6.0.0.9.10 clang-1600.0.26.2)
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

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
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
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
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
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WoosmapGeofencing",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC17WoosmapGeofencing10DistanceDB")
@interface DistanceDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSDate;
@class NSString;

@interface DistanceDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) double destinationLatitude;
@property (nonatomic) double destinationLongitude;
@property (nonatomic) int32_t distance;
@property (nonatomic, copy) NSString * _Nullable distanceText;
@property (nonatomic) int32_t duration;
@property (nonatomic, copy) NSString * _Nullable durationText;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic, copy) NSString * _Nullable mode;
@property (nonatomic) double originLatitude;
@property (nonatomic) double originLongitude;
@property (nonatomic, copy) NSString * _Nullable routing;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, copy) NSString * _Nullable units;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing13DurationLogDB")
@interface DurationLogDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface DurationLogDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable entryTime;
@property (nonatomic, copy) NSDate * _Nullable exitTime;
@property (nonatomic, copy) NSString * _Nullable identifier;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing14IndoorBeaconDB")
@interface IndoorBeaconDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface IndoorBeaconDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSString * _Nullable beaconID;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable major;
@property (nonatomic, copy) NSString * _Nullable minor;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable properties;
@property (nonatomic, copy) NSString * _Nullable venue_id;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing13IndoorVenueDB")
@interface IndoorVenueDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface IndoorVenueDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSString * _Nullable boundingBox;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable name;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing10LocationDB")
@interface LocationDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface LocationDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString * _Nullable locationDescription;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic) double longitude;
@end


/// Location manage protocal extend  LocationManagerProtocol
SWIFT_CLASS("_TtC17WoosmapGeofencing23LocationManagerProtocol")
@interface LocationManagerProtocol : CLLocationManager
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLVisit;
@class CLLocation;
@class CLRegion;

/// Location service implementation
SWIFT_CLASS("_TtC17WoosmapGeofencing23LocationServiceCoreImpl")
@interface LocationServiceCoreImpl : NSObject <CLLocationManagerDelegate>
/// Callback when new location update when user in region
/// \param manager Location service
///
/// \param visit Visit info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didVisit:(CLVisit * _Nonnull)visit;
/// Callback when new location receive form device
/// \param manager location service
///
/// \param locations Updated locations
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
/// Change Auth status
/// \param manager location service
///
/// \param status new status
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
/// Handle all error callback in case of something wrong in service
/// \param manager location service
///
/// \param error error info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
/// Fires when User existed region that monitor by app
/// \param manager location service
///
/// \param region region info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didExitRegion:(CLRegion * _Nonnull)region;
/// Fires when User entered region that monitor by app
/// \param manager location service
///
/// \param region region info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didEnterRegion:(CLRegion * _Nonnull)region;
/// Did Pause Location Updates
/// \param manager Location service
///
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager * _Nonnull)manager;
/// Start Monitoring Region
/// \param manager Location service
///
/// \param region Regon info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager didStartMonitoringForRegion:(CLRegion * _Nonnull)region;
/// Capture error while monitoring region
/// \param manager location service
///
/// \param region region info
///
/// \param error Error info
///
- (void)locationManager:(CLLocationManager * _Nonnull)manager monitoringDidFailForRegion:(CLRegion * _Nullable)region withError:(NSError * _Nonnull)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// Interacts with Core Location to collect user location and monitor region.
/// This class efficiently gathers user location and triggers events based on region monitoring and provides categorised zones of Interests and temporal clusters.
SWIFT_CLASS("_TtC17WoosmapGeofencing19LocationServiceImpl")
@interface LocationServiceImpl : LocationServiceCoreImpl
@end





SWIFT_CLASS("_TtC17WoosmapGeofencing12LogIndoorAPI")
@interface LogIndoorAPI : NSObject
/// Date
@property (nonatomic, copy) NSDate * _Nullable date;
/// message
@property (nonatomic, copy) NSString * _Nullable message;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing14LogIndoorAPIDB")
@interface LogIndoorAPIDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface LogIndoorAPIDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable eventStatus;
@property (nonatomic, copy) NSString * _Nullable log;
@property (nonatomic, copy) NSString * _Nullable message;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing14LogSearchAPIDB")
@interface LogSearchAPIDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface LogSearchAPIDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable distanceLimit;
@property (nonatomic, copy) NSString * _Nullable distanceToFurthestMonitoredPOI;
@property (nonatomic, copy) NSString * _Nullable distanceTraveled;
@property (nonatomic, copy) NSString * _Nullable distanceTraveledLastRefreshPOIRegion;
@property (nonatomic, copy) NSString * _Nullable lastPOI_distance;
@property (nonatomic) double lastSearchLocationLatitude;
@property (nonatomic) double lastSearchLocationLongitude;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString * _Nullable locationDescription;
@property (nonatomic) double longitude;
@property (nonatomic) double searchAPILastRequestTimeStampValue;
@property (nonatomic) BOOL searchAPIRequestEnable;
@property (nonatomic) BOOL sendSearchAPIRequest;
@property (nonatomic, copy) NSString * _Nullable woosmapAPIKey;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing5POIDB")
@interface POIDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSData;

@interface POIDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSString * _Nullable address;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable contact;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSString * _Nullable duration;
@property (nonatomic, copy) NSString * _Nullable idstore;
@property (nonatomic, copy) NSData * _Nullable jsonData;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) BOOL openNow;
@property (nonatomic) double radius;
@property (nonatomic, copy) NSString * _Nullable tags;
@property (nonatomic, copy) NSString * _Nullable types;
@property (nonatomic, copy) NSString * _Nullable zipCode;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing8RegionDB")
@interface RegionDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RegionDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) BOOL didEnter;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSString * _Nullable distanceText;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString * _Nullable durationText;
@property (nonatomic, copy) NSString * _Nullable eventName;
@property (nonatomic) BOOL fromPositionDetection;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic) double radius;
@property (nonatomic) double spentTime;
@property (nonatomic, copy) NSString * _Nullable type;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing17RegionIsochroneDB")
@interface RegionIsochroneDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RegionIsochroneDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) BOOL didEnter;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSString * _Nullable distanceText;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString * _Nullable durationText;
@property (nonatomic) double expectedAverageSpeed;
@property (nonatomic) BOOL fromPositionDetection;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) NSString * _Nullable idStore;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic) double longitude;
@property (nonatomic) int32_t radius;
@property (nonatomic, copy) NSString * _Nullable type;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing13VenueBeaconDB")
@interface VenueBeaconDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface VenueBeaconDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic, copy) NSString * _Nullable beaconID;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable major;
@property (nonatomic, copy) NSString * _Nullable minor;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable properties;
@property (nonatomic, copy) NSString * _Nullable venue_id;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing7VisitDB")
@interface VisitDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface VisitDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic) double accuracy;
@property (nonatomic, copy) NSDate * _Nullable arrivalDate;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSDate * _Nullable departureDate;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable visitId;
@end


/// Woosmap Geofencing SDK
/// The Woosmap Geofencing SDK allows you to monitor Geofences, track your user’s location and connect with the Woosmap Search and Distance APIs.
SWIFT_CLASS("_TtC17WoosmapGeofencing22WoosmapGeofenceManager")
@interface WoosmapGeofenceManager : NSObject
/// Access singleton of Now object
/// Usage Example:
/// \code
/// let obj = WoosmapGeofenceManager.shared
///
/// \endcode
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) WoosmapGeofenceManager * _Nonnull shared;)
+ (WoosmapGeofenceManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Initialize of WoosmapGeofencing
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Location service Connector
/// Usage Example:
/// \code
/// let locationService: LocationServiceImpl = WoosmapGeofenceManager.shared.getLocationService()
///
/// \endcode
/// returns:
/// LocationService
- (LocationServiceImpl * _Nonnull)getLocationService SWIFT_WARN_UNUSED_RESULT;
/// Activate location service to capture device location
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.initServices()
///
/// \endcode
- (void)initServices SWIFT_METHOD_FAMILY(none);
/// Activate tracking with SDK
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setTrackingEnable(enable: true)
///
/// \endcode\param enable True/False
///
- (void)setTrackingEnableWithEnable:(BOOL)enable;
/// Fetch tracking status in SDK
/// Usage Example:
/// \code
/// let state = WoosmapGeofenceManager.shared.getTrackingState()
///
/// \endcode
/// returns:
/// True/False
- (BOOL)getTrackingState SWIFT_WARN_UNUSED_RESULT;
/// Configure Woosmap API with SDK
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setWoosmapAPIKey(key: "<Woosmap Key>")
///
/// \endcode\param key API key
///
- (void)setWoosmapAPIKeyWithKey:(NSString * _Nonnull)key;
/// Custom endpoint for Woosmap Search API
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSearchWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for Search API
///
- (void)setSearchWoosmapAPIWithApi:(NSString * _Nonnull)api;
/// Custom endpoint for Woosmap Distance API
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for Distance API
///
- (void)setDistanceWoosmapAPIWithApi:(NSString * _Nonnull)api;
/// Custom endpoint for Woosmap Traffic API
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setTrafficDistanceWoosmapAPI(api: "<custom URL>")
///
/// \endcode\param api Custome URL for traffic API
///
- (void)setTrafficDistanceWoosmapAPIWithApi:(NSString * _Nonnull)api SWIFT_DEPRECATED_MSG("Call distance matrix api with DistanceProvider as woosmapTraffic");
/// Configure Traffic mode with distance matrix
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceWithTraffic(trafficMode: true)
///
/// \endcode\param trafficMode true/false
///
- (void)setDistanceWithTrafficWithTrafficMode:(BOOL)trafficMode;
/// Configure distance API language
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceAPILanguage(language: "fr")
///
/// \endcode\param language language with ISO 639-1 codes
///
- (void)setDistanceAPILanguageWithLanguage:(NSString * _Nonnull)language;
/// Filter Max Air Distance
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceMaxAirDistanceFilter(distance: 120)
///
/// \endcode\param distance numaric value in specify DistanceAPIUnits
///
- (void)setDistanceMaxAirDistanceFilterWithDistance:(NSInteger)distance;
/// Filter distance time
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceTimeFilter(time: 120)
///
/// \endcode\param time number of second
///
- (void)setDistanceTimeFilterWithTime:(NSInteger)time;
/// Filter POI location with CurrentPosition
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setCurrentPositionFilter(distance: 10, time: 120)
///
/// \endcode\param distance distance specify with unit
///
/// \param time number of seconds
///
- (void)setCurrentPositionFilterWithDistance:(double)distance time:(NSInteger)time;
/// switch to enable Search API Request
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSearchAPIRequestEnable(enable:true)
///
/// \endcode\param enable True to enable search API, False to disable search API
///
- (void)setSearchAPIRequestEnableWithEnable:(BOOL)enable;
/// Fetch activation status  search api  with SDK
/// Usage Example:
/// \code
/// let  status = WoosmapGeofenceManager.shared.getSearchAPIRequestEnable()
///
/// \endcode
/// returns:
/// Yes/No
- (BOOL)getSearchAPIRequestEnable SWIFT_WARN_UNUSED_RESULT;
/// switch to enable auto region creation when search api called
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSearchAPICreationRegionEnable(enable:true)
///
/// \endcode\param enable True/False
///
- (void)setSearchAPICreationRegionEnableWithEnable:(BOOL)enable;
/// Get status of enabling auto region creation when search API called
/// Usage Example:
/// \code
/// let  status = WoosmapGeofenceManager.shared.getSearchAPICreationRegionEnable()
///
/// \endcode
/// returns:
/// True/False
- (BOOL)getSearchAPICreationRegionEnable SWIFT_WARN_UNUSED_RESULT;
/// Switch Distance API Request Enable
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setDistanceAPIRequestEnable(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setDistanceAPIRequestEnableWithEnable:(BOOL)enable;
/// Fetch Distance API Request Enable with SDK
/// Usage Example:
/// \code
/// let status = WoosmapGeofenceManager.shared.getDistanceAPIRequestEnable()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getDistanceAPIRequestEnable SWIFT_WARN_UNUSED_RESULT;
/// Search API Filter parameters
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSearchAPIFilter(distance: 10, time: 120)
///
/// \endcode\param distance radius for search boundry
///
/// \param time time for search boundry
///
- (void)setSearchAPIFilterWithDistance:(double)distance time:(NSInteger)time;
/// Configure SearchAPI Refresh Delay Day
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSearchAPIRefreshDelayDay(day: 5)
///
/// \endcode\param day Number of days
///
- (void)setSearchAPIRefreshDelayDayWithDay:(NSInteger)day;
/// Fetch SearchAPI Refresh Delay Day
/// Usage Example:
/// \code
/// let days = WoosmapGeofenceManager.shared.getSearchAPIRefreshDelayDay()
///
/// \endcode
/// returns:
/// Number of days. Default: 1 day
- (NSInteger)getSearchAPIRefreshDelayDay SWIFT_WARN_UNUSED_RESULT;
/// Configure visit enable with SDK
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setVisitEnable(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setVisitEnableWithEnable:(BOOL)enable;
/// Fetch visit enable with SDK
/// Usage Example:
/// \code
/// let status = WoosmapGeofenceManager.shared.getVisitEnable()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getVisitEnable SWIFT_WARN_UNUSED_RESULT;
/// Configure Accuracy Visit Filter
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setAccuracyVisitFilter(accuracy:true)
///
/// \endcode\param accuracy Unit meters
///
- (void)setAccuracyVisitFilterWithAccuracy:(double)accuracy;
/// Switch to enable Zone of interest with SDK
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setCreationOfZOIEnable(enable:true)
///
/// \endcode\param enable True / False
///
- (void)setCreationOfZOIEnableWithEnable:(BOOL)enable;
/// Configuration classificaton
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setClassification(enable:true)
///
/// \endcode\param enable True / False
///
- (void)setClassificationWithEnable:(BOOL)enable;
/// Configure Radius Detection ClassifiedZOI
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setRadiusDetectionClassifiedZOI(radius:10.5)
///
/// \endcode\param radius Radius in meter
///
- (void)setRadiusDetectionClassifiedZOIWithRadius:(double)radius;
/// Call this method from the DidFinishLaunchWithOptions method of your App Delegate
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.startMonitoringInBackground()
///
/// \endcode
- (void)startMonitoringInBackground;
/// Call this method from the applicationDidBecomeActive method of your App Delegate
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.didBecomeActive()
///
/// \endcode
- (void)didBecomeActive;
/// Configure high frequency mode with location service
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setModeHighfrequencyLocation(enable: true)
///
/// \endcode\param enable True / False
///
- (void)setModeHighfrequencyLocationWithEnable:(BOOL)enable;
/// Fetch high frequency mode of location service
/// Usage Example:
/// \code
///  let status = WoosmapGeofenceManager.shared.getModeHighfrequencyLocation()
///
/// \endcode
/// returns:
/// True / False
- (BOOL)getModeHighfrequencyLocation SWIFT_WARN_UNUSED_RESULT;
/// Refresh Location to fetch new location explicitly
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.refreshLocation(allTime: true)
///
/// \endcode\param allTime Enable HighfrequencyLocation mode
///
- (void)refreshLocationWithAllTime:(BOOL)allTime;
/// Collect SearchAPI Parameters
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setSearchAPIParameters(["property1":"<custom value>",
///                             "property2":"<custom value>"])
///
/// \endcode\param parameters API parameter list
///
- (void)setSearchAPIParametersWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters;
/// Configure User Properties Filter
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.setUserPropertiesFilter(["property1",
///                             "property2"])
///
/// \endcode\param properties Filter properties
///
- (void)setUserPropertiesFilterWithProperties:(NSArray<NSString *> * _Nonnull)properties;
/// Configure SFMC Credentials
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.setSFMCCredentials(["authenticationBaseURI":"<custom value>",
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
///  WoosmapGeofenceManager.shared.setPoiRadius(10)
///
/// \endcode\param radius numbers
///
- (void)setPoiRadiusWithRadius:(id _Nonnull)radius;
/// Configuration to set optimize distance logic. default: false
/// Usage Example:
/// \code
///  WoosmapGeofenceManager.shared.OptimizeDistanceRequest = true
///
/// \endcode
@property (nonatomic) BOOL OptimizeDistanceRequest;
/// Free up region slots to use for any third party SDK . MAximum 3 slots allows
/// Usage Example:
/// \code
///  try? WoosmapGeofenceManager.shared.setProtectedRegionSlot(3)
///
/// \endcode
- (BOOL)setProtectedRegionSlot:(NSInteger)slot error:(NSError * _Nullable * _Nullable)error;
@end


@interface WoosmapGeofenceManager (SWIFT_EXTENSION(WoosmapGeofencing))
/// Disable tracking on SDK
/// Usage Example:
/// \code
/// WoosmapGeofenceManager.shared.stopTracking()
///
/// \endcode
- (void)stopTracking;
/// Update Indoor Search  API Status
/// \param enable Bool
///
- (void)setIndoorSearchAPIEnableWithEnable:(BOOL)enable;
/// Status of Indoor Search API Request Enable
///
/// returns:
/// Bool
- (BOOL)getIndoorSearchAPIEnable SWIFT_WARN_UNUSED_RESULT;
/// Refresh POI. Fetch new set of information from woosmap and update it in local cache
- (void)refreshPOI SWIFT_DEPRECATED_MSG("Call refreshPOIs");
/// Refresh POI. Fetch new set of information from woosmap and update it in local cache
- (void)refreshPOIs;
@end


SWIFT_CLASS("_TtC17WoosmapGeofencing5ZOIDB")
@interface ZOIDB : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface ZOIDB (SWIFT_EXTENSION(WoosmapGeofencing))
@property (nonatomic) double accumulator;
@property (nonatomic) double age;
@property (nonatomic) double covariance_det;
@property (nonatomic) int64_t duration;
@property (nonatomic, copy) NSDate * _Nullable endTime;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable idVisits;
@property (nonatomic) double latMean;
@property (nonatomic) double lngMean;
@property (nonatomic, copy) NSString * _Nullable period;
@property (nonatomic) double prior_probability;
@property (nonatomic, copy) NSDate * _Nullable startTime;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable weekly_density;
@property (nonatomic, copy) NSString * _Nullable wktPolygon;
@property (nonatomic) double x00Covariance_matrix_inverse;
@property (nonatomic) double x01Covariance_matrix_inverse;
@property (nonatomic) double x10Covariance_matrix_inverse;
@property (nonatomic) double x11Covariance_matrix_inverse;
@property (nonatomic, copy) NSString * _Nullable zoiId;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
