#include <stdio.h>
#include <stdlib.h>

#include "utility/list.h"

NODE *data = NULL;

int main (int argc, char **argv) {


    //create and add 1 node, w/ data 1
    append(1);  //initialize. then
    append(2);  //  + 1 node
    append(3);  //  + 1 node

    printf("\nnodes (append)= %d \n", count());

    //list all nodes, from 1st node
    display(getFirst());

    printf("\n1st => %d %p", getFirst()->info, getFirst()->link);
    printf("\nNth => %d %p", getLast()->info, getLast()->link);
    printf("\nnodes (display)= %d \n", count());

    printf("\nindex=%d", search(1));  //index=0
    printf("\nindex=%d", search(2));
    printf("\nindex=%d", search(3));
    printf("\nindex=%d", search(5));   //-1 not found


    return 0;
}