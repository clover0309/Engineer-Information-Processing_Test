#include <stdio.h>

void sf(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char* argv[]) {
    int a[] = {5,3,8,1,2,7};
    for(int i=0; i<5; i++) {
        int least = i;
            for (int j=i+1; j<6; j++)
            if (a[j] < a[least])
            least = j;
        sf(&a[i], &a[least]);
    }
    for (int k=0; k<=5; k++) {
        printf("%d",a[k]);
    }
}