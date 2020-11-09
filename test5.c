# include <stdio.h>
# include <stdlib.h>

# define MAXLINE 1000


int main(int argc, char** argv)
{
   char str[MAXLINE];
   FILE* fp;
   fp=fopen(argv[1],"r");
   int eof=0;
   int x,y;


   while((fgets(str,MAXLINE,fp))!=NULL){
      printf("%s",str);
    /*  if( sscanf(str,"%d %d",&x,&y)==2){
         printf("%d, %d\n",x,y);
      }
   */
   }
   return 0;
}
