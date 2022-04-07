Pod::Spec.new do |s|
  s.name = 'WoosmapGeofencing'
  s.version = '2.0.0'
  s.license = 'MIT'
  s.summary = 'Geofencing in Swift'
  s.description = 'The Woosmap Geofencing SDK is a mobile cross-platform software development kit focused on gathering efficiently the users’ location, triggering events based on region monitoring, and providing categorized users’ zone of interest from geographical and temporal clusters.

The SDK simplifies the integration of the location context in your mobile application by taking care of lower-level functionalities such as data collection or battery management.'
  s.homepage = 'https://github.com/woosmap/woosmap-geofencing-ios-sdk'
  s.authors = { 'Web Geo Services' => 'https://developers.woosmap.com/support/contact/'}
  s.documentation_url = 'https://github.com/woosmap/woosmap-geofencing-ios-sdk'

  s.ios.deployment_target = '12.0'

  s.swift_versions = ['5.1', '5.2']
  s.source       = { :git => "https://github.com/Woosmap/woosmap-geofencing-ios-sdk-release.git" }
  s.public_header_files = "WoosmapGeofencing.xcframework/ios-arm64/WoosmapGeofencing.framework/Headers/*.h"
  s.source_files = "WoosmapGeofencing.xcframework/ios-arm64/WoosmapGeofencing.framework/Headers/*.h"
  s.vendored_frameworks = "WoosmapGeofencing.xcframework"
  s.dependency 'Realm'
  s.dependency 'RealmSwift'
  s.dependency 'RealmSwift'
  s.dependency 'Surge'
  
end