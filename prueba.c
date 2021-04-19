#include <stdio.h>
#include <assert.h>

int main(void)
{
    
    printf("Hola Elmer!\n");
    printf("Ingresa anio de nacimiento: ");
    int anio;
    scanf("%d", &anio);
    anio = 2021-anio; // Reutilizamos variable
    printf("Tenes %d anios.\n", anio);

    assert(2==1+1);
    return 0;
}