#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    char buffer[10000];
    int top = 0;
    char x;
    int i;

    fp = fopen("ex04.txt", "r");

    if(fp == NULL)
    {
        printf("arquivo não existe\n");
    }
    else
    {
        while(fscanf(fp, "%c", &x) != EOF)
        {
            printf("%c", x);
            buffer[top++] = x;
        }
        
        fclose(fp);
    }

    printf("\n");

    do {
        scanf("%c", &x);
        if(x != '!');
            buffer[top++] = x;
    } while (x!= '!');

    fp = fopen("ex04.txt", "w");

    for(i = 0; i < top; i++)
    {
        fprintf(fp, "%c", buffer[i]);
    }

    fclose(fp);
}