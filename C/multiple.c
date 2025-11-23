#include<stdio.h>
int main(){
char ch,V,v,I,i,P,p,D,d;
printf("enter your order code (I or i , P or p , V or v , D or d)\n");
scanf("%c",&ch);
if(ch==I || ch==i)
printf("you have ordered : Idly\n");
else if(ch==P || ch==p)
printf("you have ordered : Poori\n");
else if(ch==V || ch==v)
printf("you have ordered : Vada\n");
else if(ch==D || ch==d)
printf("you have ordered : Dosa\n");
else 
print("invalid order");
return 0;
}

