
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
 #include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[]){

    int p2;

    if(argc < 3){
        printf("Errore, troppi pochi argomenti passati");
    }

    p2 = fork();

    if(p2 == 0){
        printf("elemento copiato \n");
        execl("/bin/cp", "cp", argv[1], argv[2], NULL);
        exit(2);
    }
    if(p2 > 0){
        wait(&p2);
        execl("/bin/cat", "cat", argv[2], NULL);
    }



    return 0;
}