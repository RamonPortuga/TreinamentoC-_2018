#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    srand( (unsigned)time(NULL) );

    for(i=1 ; i <= 100 ; i++)
        printf("Numero %d: %d\n",i, rand()%10);
}
