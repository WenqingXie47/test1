# include <stdio.h>
# define N 2
int main()
{
   int a[N][N]={{1,2},{3,4}};
   int b[N]={1,2};
   printf("%d\n",*(&a[0][0]+3));
   return 0;
}
