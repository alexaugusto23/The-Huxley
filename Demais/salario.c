#include<stdio.h>
#include<math.h>

int numb;
int horas;
float sal;
float hxs;

int main (){

scanf("%d",&numb);
scanf("%d",&horas);
scanf("%f",&sal);

hxs = horas * sal;

printf("NUMBER = %d\n",numb);
printf("SALARY = U$ %.2f\n",hxs);

}
