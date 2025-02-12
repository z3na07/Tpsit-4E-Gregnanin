
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Errore, troppi pochi argomenti");
    }

    for (int i = 1; i < argc - 1; i++)
    {
        execl("/bin/rm", "rm", argv[i], NULL);
    }

    return 0;
}
