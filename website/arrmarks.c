# include<stdio.h>
int main()
{           
        int r;
	printf("Enter the num rows: ");
	scanf("%d",&r);
	int c;
	printf("Enter the num colums: ");
	scanf("%d",&c);
	  int arr[r][c];
	 // int arr[4][2] ={76,80,57,81,40,90,21,95};
	for(int i=0; i<4; i++)
	{
	    for(int j=0; j<r; j++ )
	    {
	       scanf("%d",&arr[i][j]);
	    }
	}
	       printf("\n");  
        for(int i=0; i<c; i++)
	{
	    for(int j=0; j<2; j++ )
	    {
	       printf("%d",arr[i][j]);
	    }
	  
	       printf("\n"); 
	}
return 0;
   }
   
