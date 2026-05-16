#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count(char str[]){
    int countt=0;
for(int i=0;i<str[i]!='\0';i++){
    if(str[i]<='0' && str[i]<='9')
        countt++;
}
return  countt;
}

int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s",str);
    int res=count(str);
    printf("The numbner of digits are: %d",res);
}
