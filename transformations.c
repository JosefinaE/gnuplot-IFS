#include "transformations.h"

void f1(float *a, int size){
    a[0] = a[0]/2;
    a[1] = a[1]/2;
    a[2] = a[2]/2;
}
void f2(float *a, int size){
    a[0] = (a[0]+1)/2;
    a[1] = a[1]/2;
    a[2] = a[2]/2;
}
void f3(float *a, int size){
    a[0] = a[0]/2;
    a[1] = (a[1]+1)/2;
    a[2] = a[2]/2;
}

void f4(float *a, int size){
    a[0] = a[0]/2;
    a[1] = (a[1])/2;
    a[2] = (a[2]+1)/2;
}
void f5(float *a, int size){
    a[0] = (a[0]+1)/2;
    a[1] = (a[1])/2;
    a[2] = (a[2]+1)/2;
}

const void (*transformations[N_TRANS]) (float *a, int size) = {f1,f2,f3};

