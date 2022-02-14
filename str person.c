#include<stdio.h>
struct person
{
int x,y,m,z;
};
int main()

{
struct person p1 ={0,7,9,5};
p1.x=20;
printf("x=%d,y=%d,m=%d,z=%d",p1.x,p1.y,p1.m,p1.z);
}
