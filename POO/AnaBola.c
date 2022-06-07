//questao 01 PR 2018 with struct rs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct data{
        int age;
        char gen[2];
        float sal;
    };
    struct data data;

    int m300 = 0, low = 999, high = 0, men = 0, count = 0;
    float allsal = 0,aux;

    printf("mandae os dados rs\n\n");

    do
    {
        printf("Idade: ");
        scanf("%i", &data.age);
        if(data.age <= 0)
            break;
        printf("Sexus: ");
        scanf("%s", &data.gen);
        printf("Salario rsrs: ");
        scanf("%f", &data.sal);
        
        count++;
        allsal += data.sal;
        if((strcmp(data.gen, "F") == 0) && (data.sal <= 300))
            m300++;
        if(high < data.age)
            high = data.age;
        if(low > data.age)
            low = data.age;
        if(strcmp (data.gen, "M") == 0)
            men++;
    } while (data.age > 0);
    
    printf("\n%d", m300);
    printf("\n\nMedia: %2.f", allsal / count);
    printf("\nIdades:\n\tMenor: %i\n\tMaior: %i", low, high);
    aux = m300/count;
    printf("\nMolieres com salary ate 300: %2.f", aux*100);
    printf("\nNumero de MEN: %i\n", men);
}
