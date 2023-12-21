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



}