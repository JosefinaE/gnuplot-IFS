#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "transformations.h"
    
int uniform_distribution(int rangeLow, int rangeHigh) {
    double myRand = rand()/(1.0 + RAND_MAX); 
    int range = rangeHigh - rangeLow + 1;
    int myRand_scaled = (myRand * range) + rangeLow;
    return myRand_scaled;
}


void main(int argc, char* argv[]){
    // read iterations
    char *p;
    int iters = strtol(argv[1], &p, 10);
    FILE *f = fopen("out.bin","w+");
    // IFS
    srand(time(NULL));
    int r = 0;
    float a[3] = {0,0,0};
    for(int i=0;i<iters;i++){
        r = uniform_distribution(0,N_TRANS-1);
        (*transformations[r])(a,3); 
        fwrite(a,sizeof(int),3,f);
    }
    fclose(f);
}