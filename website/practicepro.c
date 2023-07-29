
/*// Write a C program to compute the perimeter and area of a rectangle with //a height of 7 inches and width of 5 inches.
# include<stdio.h>
int main()
{
   int width, height, area, perimeter;
   scanf("%d%d",&height ,&width);
    perimeter= 2*(height+ width);
    printf("perimeter of the rectangle of%d\n ", perimeter);
    area=  height * width;
    printf("area of rectangle = %d square \n ", area);
    return 0;
    }
*/
/*
//Write a C program to compute the perimeter and area of a circle with a given radius.
# include<stdio.h>
int main()
{
   float radius, area,perimeter;
   scanf("%f",&radius);
   perimeter= 2*3.14*radius;
   printf("The circle of radius:%f\n", perimeter);
   area= 3.14*radius*radius;
   printf(" The circle of radius: %f\n", area);
}
*/
/*
//Write a C program to display following variables.
//a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
//Variable declaration :
//int a = 125, b = 12345;
//long ax = 1234567890;
//short s = 4043;
//float x = 2.13459;
//double dx = 1.1415927;
//char c = 'W';
//unsigned long ux = 2541567890;
# include<stdio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
     printf("a+c= %d\n", a+c);
     printf("x+c= %f\n", x+c);
     printf("dx+x= %f\n", dx+x);
     printf("((int)dx)+ax= %ld\n",((int) dx)+ax);
     printf("a+x= %f\n", a+x);
     printf("s+b= %d\n", s+b);
     printf("ax+b= %ld\n", ax+b);
     printf("s+c= %hd\n", s+c);
     printf("ax+c= %ld\n", ax+c);
     printf("ax+ux= %lu\n", ax+ux);
    return (0);
}
*/
/*
//Write a C program to convert specified days into years, weeks and days.
//Note: Ignore leap year.
//Test Data :
//Number of days : 1329
//Expected Output :
//Years: 3
//Weeks: 33
//Days: 3
# include<stdio.h>
int main()
{
	int days, years, weeks;
	days=1329;
	years =days/ 365;
	weeks= (days%365)/7;
	days= days- ((years*365)+(weeks*7));
	printf("years:%d\n",years);
	printf("days:%d\n",days);
	printf("weeks:%d\n",weeks);
	return 0;
}
*/
/*
//9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
# include<stdio.h>
int main()
{
	int X, Y,sum;
	printf("Enter the num:");
	scanf("%d%d", &X, &Y);
	sum= X+Y;
	printf(" sum of num:%d", sum);
}
*/
/*
//Write a C program that accepts two integers from the user and calculates the product of the two integers.
# include<stdio.h>
int main()
{
 	int X,Y,product;
 	printf("Enter the first product num:");
 	scanf("%d",&X);
 	printf("Enter the  second product  num: ");
 	scanf("%d",&Y);
 	product=X*Y;
 	printf("%d",product);
 }	
 */
 //11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
 # include<stdio.h>
int main()
{
	double wi1,ci1,wi2,ci2,result;
	printf("Enter the weight -item1 num :");
	scanf("%lf",&wi1);
	printf("Enter the no of item1 num :");
	scanf("%lf",&ci1);
	printf("Enter the weight -item num :");
	scanf("%lf",&wi2);
	printf("Enter the  no of item num :");
	scanf("%lf",&ci2);
	result= ((wi1*ci1)+(wi2*ci2)/(ci1+ci2));
	printf(" Avrage of value%f\n",result);
}
				

























