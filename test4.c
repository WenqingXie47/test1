# include <stdio.h>
# include <stdlib.h>

void poi(int *p);

int main ()
{

   int *p;
   poi(p);
   printf("%d\n",*p);
   return 0;
}

void poi(int *p)
{
   p=(int*)malloc(sizeof(int));
   *p=1;
}

