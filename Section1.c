#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chaine()
{
    int entier=0;;
    int i;
char chaine[8]={'B','o','n','j','o','u','r','\0'};
    for(i=0;i<=4;i++)
    {
        if(chaine[i]=='o' || chaine[i]=='u')
        {
            entier=entier +1;
        }
    }
    return entier;
}
int main(int argc, char*argv[])
{
    int resultat;
    resultat=chaine();
    printf("Le nombre de voyelle est %d",resultat);
}
