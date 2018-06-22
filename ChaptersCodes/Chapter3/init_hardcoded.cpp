/*
* init_hardcoded.cpp
*
*
*/
// compiler command: nvcc -I ../Chapter3 -lcuda init_hardcoded.cpp -o init_hardcoded

#include <stdio.h>

#include <cuda.h>
#include <chError.h>

int main(){
    CUresult status;
    int numDevices;

    CUDA_CHECK( cuInit(0) );
    CUDA_CHECK( cuDeviceGetCount( &numDevices ) );

    printf("%d devices detected:\n", numDevices);
    for( int i=0; i<numDevices; i++ ) {
        char szName[256];
        CUdevice device;
        CUDA_CHECK( cuDeviceGet( &device, i ) );
        CUDA_CHECK( cuDeviceGetName(szName, 255, device) );
        printf( "\t%s\n", szName );
    }

    return 0;
Error:
    fprintf(stderr, "CUDA failure code: 0x%x\n", status);
    return 1;
}


// Running result: 
// yangyang@yangyang-XPS-8900:~/Desktop/cudahandbook/CodeTest/Chapter3$ ./init_hardcoded 
// 1 devices detected:
// 	GeForce GTX 750 Ti
// yangyang@yangyang-XPS-8900:~/Desktop/cudahandbook/CodeTest/Chapter3$ 

