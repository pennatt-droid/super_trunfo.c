#include <stdio.h>

int main (){
int Pontos_turisticos, população;
char Estado, Nome_da_Cidade, Codigo_da_carta[20];
float Area_km2, Pib;

printf ("Digite o nome da cidade: ");
scanf ("%s", &Nome_da_Cidade);
printf ("Digite o estado: ");
scanf ("%s", &Estado);
printf ("Digite o codigo da carta: ");
scanf ("%s", &Codigo_da_carta);
printf ("Digite a populacao: ");
scanf ("%d", &população);
printf ("Digite a area em km2: ");
scanf ("%f", &Area_km2);

printf ("Digite o pib: ");
scanf ("%f", &Pib);
printf ("Digite os pontos turisticos: ");
scanf ("%d", &Pontos_turisticos);

return 0;
}