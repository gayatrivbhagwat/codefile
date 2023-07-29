/*
//1. Write a program in C to store elements in an array and print them.
# include<stdio.h>
void main()
{
	int arr[10];
	int i;
	//printf("Input 10 elment of an array:\n");
	for(int i=0; i<10;i++)
	{
	printf(" elment:");
	scanf("%d", &arr[i]);
	}
	printf("\n Enlement in aarray are:");
	for(i=0;i<10; i++)
	{
	 printf("%d ",arr[i]);
	 }
	 printf("\n");
}
*/

 /*
 //2.Write a program in C to read n number of values in an array and display them in reverse order
 # include<stdio.h>
 void main()
 {
  	int i,n;
  	int arr[100];
  	scanf("%d",&n);
  	printf("Elment of reverse orde no\n:");
  	for(int i=0; i<n; i++)
  	{
  	printf("elment:");
  	scanf("%d",&arr[i]);
  	}
  	//for(int i=0; i<n; i++)
  	//{
  	//printf("%d",arr[i]);
  	//}
  	for(int i=n-1; i>=0;i--)
  	{
  	printf(" %d",arr[i]);
  	}
  	printf("\n\n");
}
*/

/*
//3.Write a program in C to find the sum of all elements of the array.
# include<stdio.h>
void main()
{
   	int i,n;
   	int arr[100];
   	scanf("%d",&n);
   	for(int i=0; i<n; i++)
   	{
   	printf("Element");
   	scanf("%d",&arr[i]);
   	}
   	for(int i=0; i<n; i++)
   	{
   	int sum =arr[i]+arr[i];
   	printf(" Elemnet of sum of the num %d\n",sum);
   	}
   	printf("\n");
}
*/
/*
 //4.Find the sum of all elements of an array 	
# include<stdio.h>
void main()
{
     int i,n,sum=0;
     int arr[100];
     scanf("%d",&n);
     printf("Elmemnt of sum num");
     for(int i=0; i<n;i++)
     {
     printf("elment sum");
     scanf("%d",&arr[i]);
     }
     for(int i=0; i<n; i++)
     {
     int sum =+arr[i];
     printf("%d",sum);
     }
     printf("\n");
}
  */
  /*
 //5.Count the total number of duplicate elements in an array.    
 # include<stdio.h>
 int main()
 {
 	int  n,mm=1;
 	int ctr=1;
 	int arr[100];
 	int i,j;
 	printf("Input the num of elment to be stored in the array:%d",n);
 	scanf("%d",&n);
 	printf("input elment in the array\n");
 	for(int i=0; i<n;i++)
 	 {
 	 printf("elment");
 	 scanf("%d",&arr[i]);
 	 }
 	 for(int i=0; i<n; i++)
 	 {
 	 for(int j=i+1; j<n;j++)
 	 {
 	 if (arr[i]==arr[j])
 	 {
 	 ctr++;
 	 break;
 	 }
 	 }
 	 }
 	 printf("Total num of duplikets element found in the arry:%d\n",ctr);
 	 return 0;
}
    */
// 6. Write a program in C to print all unique elements in an array.
 # include<stdio.h>
 int main()
 {
  	int arr1[100];
  	int n, ctr=0;
  	int i,k,j;
  	 printf("all unique elements of an array:\n");
  	 scanf("%d",&n);
  	 printf("input %d element in the array :\n ",n);
  	 for(int i=0; i<n;i++)
  	 {
  	 scanf("%d ",&arr1[i]);
  	 }
  	 
  	 for(int i=0;i<n; i++)
  	 {
  	 int ctr=0,k=n;
  	 for(int j=0; j<k+1;j++)
  	 {
  	 if(i!=j)
  	 {
  	 if (arr1[i]==arr1[j])
  	 {
  	 ctr++;
  	 }
  	 }
  	}
  	if (ctr==0)
  	{
  	printf("%d ",arr1[i]);
  	}
  	}
}  	           	
   	
   		
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


