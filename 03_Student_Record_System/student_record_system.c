#include<stdio.h>
int main()
{
   FILE *fp;
   int roll,n,i,j;
   char name[20];
   float marks[5];
   float average;
   printf("Enter number of students:");
   scanf("%d",&n);
   fp=fopen("students.txt","w");
   if(fp==NULL)
   {
      printf("cannot open a file for writing\n");
      return 1;
   }
   printf("enter details of %d students:\n",n);
   for(i=0;i<n;i++)
   {
      printf("student %d :",i+1);
      scanf("%d",&roll);
      scanf("%s",name);
      getchar();
      for(j=0;j<5;j++)
      {
         scanf("%f",&marks[j]);
      }
      fprintf(fp,"%d %s %f %f %f %f %f \n",roll,name,marks[0],marks[1],marks[2],marks[3],marks[4]);
   }
   fclose(fp);
   fp=fopen("students.txt","r");
   if(fp==NULL)
   {
      printf("cannot open file for reading\n");
      return 1;
   }
   printf("\nRoll\tName\tTotal\tAverage\tGrade\n");
   for(i=0;i<n;i++)
   {
      if(fscanf(fp,"%d %s %f %f %f %f %f",&roll,name,&marks[0],&marks[1],&marks[2],&marks[3],&marks[4])!=7)
      {
         break;
      }
      float sum=0;
      for(j=0;j<5;j++)
      {
         sum+=marks[j];
      }
      average=sum/5;
      char grade;
      if(average>=90)
         grade='A';
      else if(average>=80)
         grade='B';
      else if(average>=70)
         grade='C';
      else if(average>=60)
         grade='D';
      else
         grade='F';
      printf("%d\t%s\t%.2f\t%.2f\t%c \n",roll,name,sum,average,grade);
   }
   fclose(fp);
   return 0;
}
