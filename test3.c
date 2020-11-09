# include <stdio.h>

int newInt(int *p1,int *p2);
int add(int a);

int main()
{
   int *p3;
   int *p4;
   int a;
   a=newInt(p3,p4);
   printf("%d,%d,%d\n",a,*p3,*p4);

/*   for(i=0;i<3;i++){
      a=add(i);
      printf("%d",a);
   }
*/
   return 0;
}

int newInt(int *p1,int *p2)
{
   static int s=1;
   p1 = &s;
   return s;
}

int add(int a)
{
   static int s;
   s+=a;
   return s;
}
