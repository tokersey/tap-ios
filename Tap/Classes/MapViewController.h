//
//  MapViewController.h
//  Tap
//
//  Created by Daniel Cervantes on 3/21/13.
//
//

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "StopNavigationViewController.h"

@interface MapViewController : StopNavigationViewController <MKMapViewDelegate, CLLocationManagerDelegate>

@end
