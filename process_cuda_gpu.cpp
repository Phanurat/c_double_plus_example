#include <iostream>
#include <cuda_runtime.h>

__global__ void hello_cuda() {
    printf("Hello from CUDA!\n");
}

int main() {
    hello_cuda<<<1, 1>>>();
    cudaDeviceSynchronize(); // รอให้การทำงานของ GPU เสร็จ
    return 0;
}
