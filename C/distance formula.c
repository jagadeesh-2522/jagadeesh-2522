//quadratic roots
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,dist;
	printf("the coordinates of point 1 is (x1,y1):\n");
	scanf("%f %f",&x1,&y1);
	printf("the coordinates of point 2 is (x2,y2):\n");
	scanf("%f %f",&x2,&y2);
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("the distance between the two points is %f",dist);
	return 0;
}
