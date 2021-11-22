#include <string.h>
#include <stdio.h>

#include "Nodes.h"
#include "Edges.h"


void vypis(int *pInt);
void personl_print( edge_list **list);

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

    /**
     * Pomocná pro návratovou hodnotu
     */
    int* nodes ;
    edge_list *head = NULL;

    node_list *lostOfNodes = NULL;


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
           printf(" pamet %d",&head);
           ReadInputFileEdges(argv[i + 1], &head);
           printf("-------------------------------------------------------------");
          // personl_print(&head);
           printf("-------------------------------------------------------------");
       }
       else if(!strcmp(temp,tempNodes))
       {
           printf("%s\n",argv[i+1]);
           nodes = ReadInputFile(argv[i + 1], &lostOfNodes);
           printf("-------------------------------------------------------------\n");
          // vypis(nodes);
           printf("-------------------------------------------------------------");
       }
       else if(!strcmp(temp,tempSwich))
       {
           printf("%s\n",argv[i+1]);
       }
    }

    return 0;
}

void vypis(int *pInt) {
    for (int i = 0; i < 51; i++)
    {
        printf("%d Delka v poli %d\n", i,pInt[i]);
    }

}

/*
void personl_print( edge_list **list)
{
    while (*list != NULL)
    {
        printf("id: %d source: %d target: %d capacity: %d isvalid: %d WKT %s \n",(*list)->data.id,(*list)->data.source,(*list)->data.target,(*list)->data.capacity,(*list)->data.isvalid,(*list)->data.WKT);
        *list = (*list)->next;
    }
}*/


