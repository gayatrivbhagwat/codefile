
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





