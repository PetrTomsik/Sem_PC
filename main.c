#include <string.h>
#include <stdio.h>

void readNodes(char *string);

void readEdges(char *string);

int main(int argc , char *argv[]) {
    char *token;
    const char s = '-';

    char str[] ="-s";
    char str1[] ="-t";
    char str2[] ="-e";
    char str3[] ="-v";

    for (int i = 0; i < argc; ++i)
    {
        char *temp = argv[i];

       if(!strcmp(temp,str))
       {
           printf("%s\n",argv[i+1]);
       }
       else if(!strcmp(temp,str1))
       {
           printf("%s\n",argv[i+1]);
       }
       else if(!strcmp(temp,str2))
       {
           printf("%s\n",argv[i+1]);
           readEdges(argv[i+1]);
       }
       else if(!strcmp(temp,str3))
       {
           printf("%s\n",argv[i+1]);
           readNodes(argv[i+1]);
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


void readNodes(char string[])
{
    char *temp =string;
    printf("%s\n",temp);
    char line[255];
    FILE  * fpointer = fopen(temp,"r");

    fgets(line,255, fpointer);
    printf("%s", line);

}
