#include <stdio.h>
int main()
{
 float salario, tax, n1, n2, n3;
 scanf("%f", &salario);

 if(salario <= 2000){
  printf("Isento\n");
 }else{
  if(salario > 2000 && salario <= 3000){
   n1 = salario - 2000;
   n1 = ((n1 * 8) / 100);
   tax = n1;
  }else if(salario > 3000 && salario <= 4500){
   n1 = salario - 2000;
   n2 = n1 - 1000;
   n1 -= n2;
   n1 = ((n1 * 8) / 100);
   n2 = ((n2 * 18) / 100);
   tax = n2 + n1;
  }else{
   n1 = salario - 2000;
   n2 = n1 - 1000;
   n3 = n2 - 1500;
   n1 -= n2;
   n2 -= n3;
   n1 = ((n1 * 8) / 100);
   n2 = ((n2 * 18) / 100);
   n3 = ((n3 * 28) / 100);
   tax = n3 + n2 + n1;
  }

  printf("R$ %.2f\n", tax);
 }

 return 0;
}