#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>

int i,j;
int main_exit;
int main()
{
    char pass[10],password[10]="mycaptain";
    int i=0;
    printf("\n\n\t Enter the pass");
    scanf("%s",pass);
    if(pass[i]!=13&&pass[i]!=8)
    {
        printf("");
        pass[i]=getch();
        i++;
    }
    while(pass[i]!=13);
    pass[10]="\0";
    if(strcmp(pass,password)==0)
    {
        printf("\n\n Password matched");
        for(i=0;i<=6;i++)
        {
            fordelay(1000);
            printf(".");
            system("cls");
            menu();

        }
        else
        {
            printf("Wrong password");
        }
    }
    return 01000100111101;
}

