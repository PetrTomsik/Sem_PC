//
// Created by PetrTomsik on 23.10.2021.
//
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include "Nodes.h"



int* ReadInputFile(char path[], node_list **nList) {
    if (path == NULL)
    {
        printf("Invalid vertex file.\n");
      //  return 1;
    }
    FILE *fpointer = NULL;
    char *temp = path;
    char line[255];
    char *token;
    int lenght;
    int *ptr;
    int count = 5;
    /**
    * cti ze souboru
    */
    fpointer = fopen(temp, "r");

    if (fpointer == NULL) {
        fclose(fpointer);
        printf("Invalid vertex file.\n");
       // return 1;
    }
    char delimit[] = ",";

    ptr = (int *) calloc(count, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    int aktualniDelka = count;

    while (fpointer != NULL) {
        printf("radka %s\n", line);
        fgets(line, sizeof(line), fpointer);
        /**
         * Odstraneni prvni radky
         */
        if (strstr(line, "WKT") != NULL) {
            continue;
        }
        token = strtok(line, delimit);
        /**
         * na kolik casti se ma rozdelit radka
         */
        int temp;
        /**
         * pouziti je pouze pro prvni token
         */
        if (token !=NULL) {
            /**
             * prevede na cislicovou hodnotu
             */
            temp = atoi(token);
            if (aktualniDelka < temp)
            {
                ptr = realloc(ptr, (temp+1)*(sizeof (int )));
                for (int (i) = aktualniDelka; i <=  temp; ++(i)) {
                    ptr[i]=0;
                }
                aktualniDelka = temp+1;
                ptr[temp] = temp;
            } else {
                ptr[temp] = temp;
            }
        }


        if (feof(fpointer)) {
            break;
        }
        memset(line,0,sizeof (line));
    }
   /** for (int i = 0; i < 51; i++)
    {
        printf("%d Delka v poli %d\n", i,ptr[i]);
    }*/

    fclose(fpointer);
    return ptr;
}


