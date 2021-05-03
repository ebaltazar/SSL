#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main(void)
{
    printf("Testeando...\n");
    assert(0==Celsius(32));
    assert(32==Farenheit(0));
    //assert(-17.78==Celsius(0));
    printf("Ok\n");

    return 0;
}
