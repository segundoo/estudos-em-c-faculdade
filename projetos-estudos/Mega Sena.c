#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMega[6]) {
	int numeroSorteado;
	
        srand(time(NULL));
	    numeroSorteado = rand() % 60 + 1;

	return numeroSorteado;	
}

int main()
{
    int sorteioMega[6], x = 0, j = 0, igual;

    do
    {
        sorteioMega[x] = numeroRandomicoNaoRepetido(sorteioMega);
        for (j = 0; j < x; j++) 
        {
            if (sorteioMega[x] == sorteioMega[j])
            {
                igual = 1;
            }    
        }
        if (igual == 0)
        {
            x++;
        }
        printf("Numeros sorteados de 1 a 60 da Mega Sena\n");
        for (x = 0; x < 6; x++)
        {
            printf("%i ,", sorteioMega[x]);
        }   
    } while (x < 6);
    
	return 0;
}