## 4.3.7
Enhancement: Battery optimization while running the SDK in the background.

## 4.3.6
Enhancement: By default, the radius value for the POI is set to the 'radius' property of the user's asset. If the radius property is missing, it will be set to a default value of 300 meters.


## 4.3.5
- Enhancement: Release geofence slot for other SDK to use
- Enhancement: Fetch POI information in densely populated network

## 4.3.4
- Bug: Cocopod distribution corrected for error `Multiple commands produce` on PrivacyInfo.xcprivacy

## 4.3.3
- Enhancement: Expose new routine `refreshPOI` to clean up POI database explicitly
- Enhancement: Fine-tune background location update with iOS 17.4

## 4.3.2
- Enhancement: Added `PrivacyInfo.xcprivacy` file

## 4.3.0
- Enhancement: Enhance SDK with proper Error handling in code
- Enhancement: Fatal error raise with Event (`sdkErrorOccured`)

## 4.2.6
- Bug: Handled core database concurrency

## 4.2.5
- Bug: Remove `fatalError` log from source

## 4.2.4
- Enhancement: Release all resources from device once `stopTracking` is called.

## 4.2.3
- Bug- unable to restore last saved locations

## 4.2.2
- Bug fixed - Data migration form previous version of saved data 

## 4.2.1
- Deprecated serachAPIError and introduce searchAPIError

## 4.2.0
- Enhancement: Save previous visited beacons info for 30 days
 
## 4.1.0
- Enhancement: Added os logger with SDK

## 4.0.1
- Enhancement: expose new property `user_properties` with POI
