//add n no using maloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,sum,i;
    printf("enter no of values you want to add: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr = (int*) malloc(sizeof(int));
        //scanf("%d",&(*(ptr+i)));
        scanf("%d",(&(*ptr)));
        sum = sum + *(ptr);
    }
    printf("no: %d",sum);
}
