#include <stdio.h>
#include<stdlib.h>
int main()
{
int n=123;
system("cls");
  printf("%d reverse is %d",n,n%10);
  n=n/10;
  printf("%d%d",n%10, n/10);
  getch();
  }

