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

}