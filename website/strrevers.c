# include <stdio.h>
# include <string.h>
int main()
{
   char str[40];
   scanf("%[^\n]s",str);
   puts("The size of is :");
   //size
   int size =0;
   int i=0;
   while (str[k]!='\0'){
   size ++;
   k++;
   }
     //printf("%d", size );
     for(int i=0 ; i<size-1; i<=j;i++ ,j++)
     {
     char temp = str[j];
     str[i]= str[j];
     str[j]= temp ;
     }
     puts ("THe revers string is :");
     puts(str);
     
          return 0;
     }
   
