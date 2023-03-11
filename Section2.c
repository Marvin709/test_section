#include <stdio.h>
#include <stdlib.h>


int main(int argc, char*argv[])
{
    char c,chaine[100];
    int i,j,car=0;
    printf("Entrer une chaine de caracteres:");
    gets(chaine);


        for(i=0;chaine[i]!='\0';i++)
        {
            for(j=0;chaine[j]!='\0';j++)
            {
                if(i!=j)
                {
                    if(chaine[i]==chaine[j])
                    {
                        printf("Les chaines sont egales i = %d et j = %d  \n",i,j);
                        car=car+1;
                        c=chaine[i];
                    }
                     break;
                         break;
                        break;
                }

            }
        }
        printf("Le premier caractere repeter est %c ",c);

}
