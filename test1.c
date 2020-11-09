# include <stdio.h>
# include <stdlib.h>
# define  MAX 256

enum bool {false,true};
typedef enum bool bool;

int main(int argc, char** argv)
{
   FILE *fp;
   char str[MAX];
   char str2[MAX];
   char str3[MAX];

   bool eof=false;
   char c;
   int i;

   fp=fopen(argv[1],"r");
   while (!eof){
      eof=fscanf(fp,"%[^\n]s",str);
      printf("%s",str);
      fgetc(fp);
      printf("\n");

   }
 /*  fscanf(fp,"%[^n]s",str1);
   c=fgetc(fp);
   fscanf(fp,"%[^\n]s",str2);
   fscanf(fp,"%[^\n]s",str3);
   printf("%s\n",str1);
   printf("%c\n",c);
   printf("%s\n",str2);
   printf("%s\n",str3);*/

   fclose(fp);
   return 0;
}
