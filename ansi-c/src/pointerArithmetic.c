#include <stdio.h>

//gcc -o out/pointerArithmetic src/pointerArithmetic.c  && out/pointerArithmetic
int main(int argc, char const *argv[])
{
    char string1[] = "Hello";      //hexOfPointer=variableNameOfHex, string1 is the pointer address !
    char *string2 = "Hello";       //pointing addr of string pointer, in reality.

    printf("hexOfPointer  |variableNameOfHex| value\n");
    printf("%p      |%p        | %s\n", &string1, string1, string1);
    printf("%p      |%p        | %s\n", &string2, string2, string2);

    //pointer arithmetic
    printf("%c   %p      \n", string2[0], &string2[0]);
    printf("%c   %p = %p \n", string2[1], &string2[1], &string2[0]+1);
    printf("%c   %p = %p \n", string2[16], &string2[2], &string2[0]+6);
//    printf("%x", &string2[0]+16000);     //somewhere in galactica :)

    //string[5] is  null. last value

    return 0;
}