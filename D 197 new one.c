#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count=0;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    char names[n][20];
    printf("Enter the name of the employees: ");
    for(int i=0;i<n;i++)
    {
        scanf("%s",names[i]);

    }
    char k;
    printf("Enter the alphabet: ");
    scanf(" %c",&k);

    for(int i = 0; i <n; i++)
    {
        if(names[i][0] == k)
        {
            count++;
        }
    }

    printf("The count is: %d",count);

}
