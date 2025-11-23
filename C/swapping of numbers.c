// Marksheet Problem
#include<stdio.h>
int main(){
	float m1,m2,m3,m4,m5;
	float avg;
	printf("enter the scores of 5 subjects : \n");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	if(m1<30||m2<30||m3<30||m4<30||m5<30)
	printf("fail\n");
	else if(30<=avg && avg<=50)
	printf("Grade C\n");
	else if(51<=avg && avg<=60)
	printf("Grade B\n");
	else if(61<=avg && avg<=75)
	printf("Grade A\n");
	else
	printf("distinction");
	return 0;
	
}
