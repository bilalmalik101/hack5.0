#include <math.h>
#include"utils.h"
//function to return distance value
double getAirDistance(double originLatitude,double originLongitude, double destinationLatitude,double destinationLongitude){
    // using degreetoRadian function                 
    originLatitude = degreeToRadians(originLatitude);
    originLongitude = degreeToRadians(originLongitude);
    destinationLatitude = degreeToRadians(destinationLatitude);
    destinationLongitude = degreeToRadians(destinationLongitude);
    double delta = destinationLongitude - originLongitude;
    float const R = 6371;
    // using spherical law
    double distance = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) *cos(delta)) * R;
    return distance;
}
