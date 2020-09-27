#include <stdio.h>
int main(void) {
float en1; 
float en2;
int x;
float ans;

printf("M e n u\n");
printf(" 1. Add (+) \n");
printf(" 2. Subtract (-) \n"); 
printf(" 3. Multiply (*)\n"); 
printf(" 4. Divide (/) \n");
printf(" 5. Modulo (%%) \n"); 
printf("Enter Number 1 : "); 
scanf("%f",&en1); 
printf("Enter Number 2 : ");
scanf("%f",&en2); 
printf("Select Choice : "); 
scanf("%d",&x); 
printf("------------------------------\n");
int m = (int) en1;
int n = (int) en2;
int er;
switch (x)

{
  case 1:
  ans = en1+en2;
  printf("Anwser is : %.3f + %.3f = %.3f",en1,en2,ans);
  break;
  
  case 2:
  ans = en1-en2;
  printf("Anwser is : %.3f + %.3f = %.3f",en1,en2,ans);
  break;
  
  case 3:
  ans = en1*en2;
  printf("Anwser is : %.3f + %.3f = %.3f",en1,en2,ans);
  break;
  
  case 4:
  ans = en1/en2;
    if(en2==0)
    printf("Divide by Zero!!!");
  else
    printf("Anwser is : %.3f + %.3f = %.3f",en1,en2,ans);
  break;

  case 5:
  er = m%n;
  printf("Anwser is : %d %% %d = %d",m,n,er);
  break;
}
  return 0;
}




