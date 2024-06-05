#include <stdio.h>

int main(void){
  double hourly_rate, salary;
  int hours_worked;

  printf("\n%s", "Enter number of hours worked (-1 to end):");
  scanf("%d", &hours_worked);

  while(hours_worked != -1){
    printf("%s", "Enter hourly rate of the worker ($00.00):");
    scanf("%lf", &hourly_rate);

    salary = hours_worked > 40 ? 40 * hourly_rate + (hours_worked - 40) * hourly_rate / 2 : hours_worked * hourly_rate;

    printf("Salary is $%.2lf\n", salary);

    printf("\n%s", "Enter number of hours worked (-1 to end):");
    scanf("%d", &hours_worked);
  }

  return 0;
}
