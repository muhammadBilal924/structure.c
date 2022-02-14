#include<stdio.h>
struct point
{
int x,y;
};
int main()
{
struct point arr[2];
arr[1].x = 2;
arr[1].y = 2;
printf("%d %d",arr[2].x,arr[2].y);
}
