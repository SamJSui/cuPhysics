#include <cuphysics.h>

#include <cuda_runtime.h>
#include <stdio.h>

using namespace std;
using namespace cuphysics;

int main () {
    Vector3 v1;
    Vector3 v2(1, 2, 3);
    printf("Initial vector x values\n");
    printf("v1 x: %f\n", v1.x());
    printf("v2 x: %f\n", v2.y());
    printf("\n");

    v1.x(5);
    printf("Setting v1's x component to 5\n");
    printf("v1 x: %f\n", v1.x());
    printf("v2 x: %f\n", v2.y());
    printf("\n");

    v1.clear();
    printf("After clear:\n");
    printf("v1 x: %f\n", v1.x());
    printf("v2 x: %f\n", v2.y());
    return 0;
}