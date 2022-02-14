#include<stdio.h>
#include<string.h>
struct person
{
char name [50];
int citNo;
float salary;
} person1;

int main()
{
strcpy(person1.name,"Bilal Ad");
person1.citNo=2002;
person1.salary=2500;
printf("Name: %s\n", person1.name);
printf("Citizenship No.: %d\n",person1.citNo);
printf("Salary.: %.2f",person1.salary);

}




