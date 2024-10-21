#define N_TRANS 3
void f1(float *a, int size); 
void f2(float *a, int size); 
void f3(float *a, int size); 
void f4(float *a, int size); 
void f5(float *a, int size); 
extern void (*transformations[N_TRANS]) (float *a, int size);
