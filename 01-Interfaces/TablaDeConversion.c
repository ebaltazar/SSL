#include <stdio.h>
#include "Conversion.h"

main(void)
{
    const int linf = 0, lsup = 300, inc = 20;

    printf("----- Farenheit a Celsius -----\n");

    for(float temp = linf; temp <= lsup; temp = temp + inc )
        printf("%3.0f\t%6.2f\n", temp, Celsius(temp) );

    printf("----- Celsius a Farenheit -----\n");

    for(float temp = linf; temp <= lsup; temp = temp + inc )
        printf("%3.0f\t%6.2f\n", temp, Farenheit(temp) );
}
