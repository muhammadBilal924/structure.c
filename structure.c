#include<stdio.h>
struct point
{
int x,y,z;
};
int main()
{
struct point p1={.x=2,.y=4,.z=0};
struct point p2={.x=20};
printf("x= %d, y= %d, z= %d\n",p1.x, p1.y, p1.z);
printf("x=%d",p2.x);
}
