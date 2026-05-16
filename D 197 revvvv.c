#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[40];
    fgets(str,40,stdin);
    int l=strlen(str);

    int i=0;
    int j=l-1;
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    puts(str);
}
