
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{

    FILE *origine, *destinazione;
    unsigned char buffer[BUFFER_SIZE];
    int n;

    if (argc != 3)
    {
        perror("Numero di argomenti non valido");
        return 1;
    }

    origine = fopen(argv[1], "r");
    if (origine == NULL)
    {
        perror("Errore apertura file origine");
        exit(1);
    }
    else
    {
        destinazione = fopen(argv[2], "w");
        if (destinazione == NULL)
        {
            perror("Errore apertura file destinazione");
            exit(1);
        }
        else
        {
            while(!feof(origine)){
                n = fread(buffer, 1, BUFFER_SIZE, origine);
                if(n > 0){
                    fwrite(buffer, 1, n, destinazione);
                }
            }
        }

        fclose(origine);
        fclose(destinazione);
    }

    return 0;
}