#include <string.h>
#include <stdio.h>

#include "Nodes.h"
#include "Edges.h"

void readNodes(char *string);

void readEdges(char *string);

int main(int argc , char *argv[])
{
    /**
     * Ošetřění vstupu
     */
    if (argc < 2 && *argv == NULL)
    {
        printf("Chyba");
    }

    /**
     * Parametr jednoznačně určuje zdroj v síti díky primárnímu klíči id tabulky <uzly.csv> .
     * Pokud zadaný uzel v tabulce <uzly.csv> neexistuje,
     * program vypíše chybovou hlášku „Invalid source vertex.\n a skončí s návratovou hodnotou 3.
     */
    char tempSourceID[] ="-s";

    /**
     * Parametr na základě primárního klíče id v tabulce <uzly.csv> jednoznačně určuje stok v síti.
     * Pokud uvedený uzel v tabulkce <uzly.csv> neexistuje, nebo je shodný se zdrojem <source_id> ,
     * program vypíše chybovou hlášku „Invalid sink vertex.\n a skončí s návratovou hodnotou 4.
     */
    char tempTargetID[] ="-t";

    /**
     * Parametr určuje vstupní soubor typu csv, jehož řádky popisují hrany sítě.
     * V případě zadání nevalidní tabulky program vypíše chybovou hlášku
     * Invalid edge file.\n a skončí s návratovou hodnotou 2.
     */
    char tempEdges[] ="-e";

    /**
     * Parametr specifikuje vstupní soubor typu csv, který obsahuje informace
     * o uzlech sítě. Při zadání nevalidní tabulky program vypíše chybovou hlášku
     * „Invalid vertex file.\n a skončí s návratovou hodnotou 1. Zaručte,
     * aby načtení uzlů grafu bylo vždy první operací.
     */
    char tempNodes[] ="-v";

    /**
     * Jedná se o nepovinný přepínač, při jehož uvedení bude program pracovat
     * i s hranami, které mají příznak isvalid nastavený na hodnotu False. Při
     * spuštění bez parametru -a tedy program uvažuje pouze hrany s příznakem
     * isvalid s hodnotou True.
     */
    char tempSwich[] ="-a";
    int mistake = 0;
    /**
     * muzu mit
     * . Zaručte,aby načtení uzlů grafu bylo vždy první operací
     */
    for (int i = 0; i < argc; ++i)
    {
        char *temp = argv[i];

       if(!strcmp(temp,tempSourceID))
       {
           printf("%s\n",argv[i+1]);
       }
       else if(!strcmp(temp,tempTargetID))
       {
           printf("%s\n",argv[i+1]);
       }
       else if(!strcmp(temp,tempEdges))
       {
           printf("%s\n",argv[i+1]);
       }
       else if(!strcmp(temp,tempNodes))
       {
           printf("%s\n",argv[i+1]);
           mistake = ReadInputFile(argv[i+1]);
           if (mistake!=0)
           {
               return mistake;
           }

       }
       else if(!strcmp(temp,tempSwich))
       {
           printf("%s\n",argv[i+1]);
       }
    }


    printf("Hello, World!\n");
    return 0;
}

void readEdges(char string[]) {
    char *temp =string;
    printf("%s\n",temp);
    char line[255];
    FILE  * fpointer = fopen(temp,"r");

    fgets(line,255, fpointer);
    printf("%s", line);
}


