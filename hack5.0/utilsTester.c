//Program to test different functions of source files
#include<stdio.h>
#include<math.h>
#include"utils.h"
#define delta 0.0001
int isclose(double a,double b){
    return(fabs(a-b)<delta);

}
int main(){
    int failed=0;
    int passed=0;
//test case for degree to radian function
double latitude=50.0;
double expected=0.872665;
double returnedvalue=(degreeToRadians(latitude));
if(isclose(returnedvalue,expected)){
    printf("passed\n");
    passed++;
}
else{
    printf("failed: degreetoradians returned %1f, expected %1f\n",returnedvalue,expected);
    failed++;
}
// just change value of case
latitude=150.0;
expected=2.617994;
returnedvalue=(degreeToRadians(latitude));
if(isclose(returnedvalue,expected)){
    printf("passed\n");
    passed++;

}
else{
    printf("failed:degree to radian returned %1f,expected %1f\n",returnedvalue,expected);
    failed++;
}
double longitude=96.0;
expected=2.0;
returnedvalue=round(degreeToRadians(longitude));
if(isclose(returnedvalue,expected)){
    printf("passed\n");
    passed++;
}
else{
    printf("failed: degree to radian returned %1f,expected %1f \n",returnedvalue,expected);
    failed++;
}
//test case to check result of getairdistance function and assigning variables and copy values in airdistancefunction
double originLatitude=40.0,originLongitude=-85.0,destinationLatitude=42.0,destinationLongitude=-96.0;
printf("getAirdistance(%1f,%1f,%1f,%1f)" ,originLatitude,originLongitude,destinationLatitude,destinationLatitude);
returnedvalue=round(getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude));
if(returnedvalue==949.0){
    printf("passed\n");
    passed++;
}
else{
    printf("failed degree returned %1f,degree expected 949.0\n",returnedvalue);
    failed++;

}
//changing values only
originLatitude=-40.0,originLongitude=85.0,destinationLatitude=-45.0,destinationLongitude=96.0;
printf("getAirDistance(%1f,%1f,%1f,%1f)",originLatitude,originLongitude,destinationLatitude,destinationLongitude);
returnedvalue=round(getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude));
if(returnedvalue==1058.0){
    printf("passed\n");
    passed++;
}
else{
    printf("failed = degree in radian returned%1f,and to expect 1058.0\n",returnedvalue);
    failed++;
}
//test case for lorentztimedilation function to check work
double t=1.0, percentC=0.25;
returnedvalue=round(lorentzTimeDilation(t,percentC));
if(returnedvalue==1.00){
    printf("passed\n");
    passed++;
}
else{
    printf("failed lorentz return %1f, to expect 1.00\n",returnedvalue );
    failed++;
}



}