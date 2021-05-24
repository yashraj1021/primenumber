#include<stdio.h>
int i;

int main()
{

    int n,prime;
	
    printf(" Enter any number : ");
    scanf("%d",&n);
    
    i = n/2;

    prime = number(n);

   if(prime==1)
        printf(" The number %d is a prime number.",n);
   else
      printf(" The number %d is not a prime number.",n);
   return 0;
}

int number(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         number(n);
      }
}

