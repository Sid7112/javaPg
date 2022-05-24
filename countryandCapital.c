#include<stdio.h>
#include<string.h>

int main()

{
    int i;

    char *country[10] = {"India","France","Japan","China"};

    char *capital[10] = {"Delhi","Paris","Tokio","Beijing"};

    char countryName[10];

    printf("Enter name of your coutry : ");

    scanf("%s",countryName);

    for(i=0;i<4;i++)
    {
        if(strcmp(*(country+i),countryName) == 0)
        {
            printf("%s:%s\n",*(country+i),*(capital+i));
        }
    }


}