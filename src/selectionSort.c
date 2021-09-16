#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/sort.h"


void printArr(void *c) {
    int i = 0;

    do {
        printf("%d ", ((int *)c)[i]);

        i++;
    } while (((int *)c)[i]);

    printf("\n");
}

//  gcc src/sortSelection.c -o out/sortSelection  && out/sortSelection
int main(int argc, char **argv) {

    //init
    int x[] = {1, 5, 8, 3, 2, 9, 7, 6, 11, 10, '\0'}; //adding NULL at last element is important in some cases.!
                                                      // or use calloc.
    int *a = (int *) calloc(1, sizeof(x));
    memcpy(a, x, sizeof(x));

    printArr(&a[0]);

//    printf("%lu\n", sizeof(x));   //10 * 4(int) = 40
//    printf("%d %d %d\n", a[10], a[11], a[12]);  //we are sure that >length are null

    sort1(&a[0], DESC);
    printArr(&a[0]);

    sort2(&x[0], sizeof(x)/sizeof(int), DESC);
    printArr(&x[0]);

    return 0;
}