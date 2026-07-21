#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int characters=0,lines=0;
   printf("\n...TO COUNT CHARACTERS AND LINES...\n");
   fp=fopen("input.txt","r");
   if(fp==NULL)
   {
      printf("File cannot be opened...\n");
      return 1;
   }
   while((ch=fgetc(fp))!=EOF)
   {
      if(ch != '\n' && ch != '\r' && ch != '\t' && ch != ' ')
      characters++;
      if(ch =='\n')
         lines++;
   }
   fclose(fp);
   printf("Total characters: %d\n",characters);
   printf("Total lines: %d\n",lines);
   return 0;
}
