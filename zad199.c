/*  Program treba pretvorit mala u velika slova i obratno u stringu.  */

#include <stdio.h>

int main()
{
    char    str[100];
    int     brojac;

    printf("Unesi neki string : ");
    gets(str);

    for(brojac=0;str[brojac]!=NULL;brojac++)
    {
        if(str[brojac]>='A' && str[brojac]<='Z')
            str[brojac]=str[brojac]+32;   //Pretvara u mala slova.
        else if(str[brojac]>='a' && str[brojac]<='z')
            str[brojac]=str[brojac]-32;   // Pretvara u velika slova
    }

    printf("\nString poslije : [ %s ]\n",str);
    return 0;
}
