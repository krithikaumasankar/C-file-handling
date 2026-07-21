#include<stdio.h>
int main()
{
   FILE *fp1,*fp2;
   char ch;
   printf("\n...TO COPY A FILE TO ANOTHER FILE...\n");
   //Open source file for reading
   fp1 = fopen("source.txt","r");
   if(fp1 == NULL)
   {
      printf("Source file cannot be opened...\n");
      return 1;
   }
   //Open destination file for writing
   fp2 = fopen("destination.txt","w");
   if(fp2 == NULL)
   {
      printf("Destination file cannot be opened...\n");
      fclose(fp2);
      return 1;
   }
   //Copy process
   while((ch=fgetc(fp1))!=EOF)
      fputc(ch,fp2);
   printf("File copied successfully...!\n");
   fclose(fp1);
   fclose(fp2);
   return 0;
}
