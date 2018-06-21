/*
* init_hardcoded.cpp
*
*
*/

#include <stdio.h>

#include "cuda_drvapi_dynlink.c"
#include "dynlink/cuda_drvapi_dynlink.h"
#include <chError.h>

int main(){
    CUresult status;
    int numDevices;

    CUDA_CHECK( cuInit(0, 9010) );
    CUDA_CHECK( cuDeviceGetCount( &numDevices ) );

    printf("%d devices detected:\n", numDevices);
    for(int i=0; i<numDevices; i++) {
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