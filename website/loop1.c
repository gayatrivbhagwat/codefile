/*
// Calculate the sum of the series 1 +11 + 111 + 1111 + .. n terms
# include<stdio.h>
void main()
{
	int n,i,sum=0;
	long int t=1;
	printf("Input  the num be of terms");
	scanf("%d",&n);
	for(int i=1; i<=n;i++)
	{
	printf("%ld",t);
	if(i<n)
	{
	printf("+");
	}
	
	sum=sum+t;
	t=(t*10)+1;
	}
	printf("\nThe sum is:%d\n",sum);
}
*/
/*
// Display the pattern like a pyramid with numbers increased by 1

# include<stdio.h>
 void main()
{
     int i,j,spc,rows,k,t=1;
     printf("input number of rows :");
     scanf("%d",&rows);
     spc=rows+4-1;
     for(int i=1; i<=rows; i++)
     {
        for( int k=spc; k>=1; k--)
        {
          printf(" ");
        }
        for(int j=1; j<=i; j++)
         printf("%d ",t++);
       
         printf("\n");
          spc--;
     '
     }
}       
*/
//Write a C program to display a pattern like a right angle triangle with a number.
# include<stdio.h>
 void main()
{
    int i,j,n;
    printf("input the num of rows ");
    scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
	  for( int j=1; j<=i; j++)
	  {
	    printf("%d ",i);
	    printf("\n");
	  }
       }
 }






















	
	
