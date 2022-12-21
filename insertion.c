#include <stdio.h>
    int main()
    {
    int a[100],i,size,value;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter elements of array");
    for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the elements u want to insert");
    scanf("%d",&value);
    a[size]=value;
    printf("Updated value of array");
    for(i=0;i<size+1;i++)
    {
    printf("%d",a[i]);
    }
   }