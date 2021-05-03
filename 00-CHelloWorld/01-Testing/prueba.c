#include <stdio.h>
#include <assert.h>

int main(void)
{
    
    printf("Hola Elmer!\n");
    int anioNac=1996;
    int edad = 2021-anioNac;
    printf("Tenes %d anios.\n", edad);

    assert(25==edad);
    return 0;
}
