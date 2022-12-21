#include <stdio.h>

//Compiler version gcc  6.3.0
/*char fun();
void main()
{
 // char fun();
  char ch;
  ch=fun();
  printf("ch=%c",ch);

}
char fun()
{
  char c;
  printf("Enter a character");
  scanf("%c",&c);
  //return 0;
  return c;
}*/
/*void sum(int,int );
void mul(int, int );
void sub(int,int );
void div(int, int );
void sum(int a,int b )
{
    int sum;
    sum=a+b;
    printf("%d\n",sum);
}
void mul(int a, int b)
{
    int mul;
    mul=a*b;
    printf("mul=%d\n",mul);
}
void sub(int a,int b)
{
    int sub;
    sub=a-b;
    printf("sub=%d\n",sub);
}
void div(int a, int b)
{
    int div;
    div=a/b;
    printf("div=%d\n",div);
}

void main()
{
    int a,b;
    printf("Enter two number");
    scanf("\n %d%d",&a,&b);
    /*while(1){
    printf("1:sum \n 2:mul \n 3: div \n 4: sub \n");
      scanf("%d",&x);

         switch(x)
         {
         case 1:
      sum(a,b);
       break;
       case 2:
       mul(a,b);
       break;
       case 3:
       div(a,b);
       break;
       case 4:
       sub(a,b);
       break;
       }

       }*/
   /* sum(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);*/
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