#include <stdio.h>

int main()
{
    int A, B, C, D;
    int max1, max2, sm1, sm2;
    scanf("%d%d%d%d",&A,&B,&C,&D);
     
    // Input values for A, B, C, and D
    
    // Determine the maximum values
    if (A > B)
    {
        max1 = A;
        sm1 = B;
    }
    else
    {
        max1 = B;
        sm1 = A;
    }
    
    if (C > D)
    {
        max2 = C;
        sm2 = D;
    }
    else
    {
        max2 = D;
        sm2 = C;
    }
    
    // Find the third maximum number
    if (max1 > max2)
    {
        if (max2 > sm1)
        {
            printf("%d is the second maximum number.\n", max2);
        }
        else
        {
            printf("%d is the second maximum number.\n", sm1);
        }
    }
    else if (max1 > sm2) 
    {
        printf("%d is the maximum number.\n", max1);
    }
    else
    {
        printf("%d is the maximum number.\n", sm2);
    }

    return 0;
}





