#include<stdio.h>  
#include<math.h>  
#define f(x) 1/(1+x*x)  
int main()  
{  
 float lower, upper, intgrl=0.0, stepSize, k;  
 int i, subInterval;  
 printf("Enter lower integration limit: ");  
 scanf("%f", &lower);  
 printf("Enter upper integration limit: ");  
 scanf("%f", &upper);  
 printf("Enter sub intervals: ");  
 scanf("%d", &subInterval);  
stepSize = (upper - lower)/subInterval;  
 intgrl = f(lower) + f(upper);  
 for(i=1; i<= subInterval-1; i++)  
 {  
  k = lower + i*stepSize;  
  if(i%2==0)  
  {  
   intgrl = intgrl + 2 * f(k);  
  }  
  else  
  {  
   intgrl= intgrl + 4 * f(k);  
  }  
 }  
 intgrl = intgrl * stepSize/3;  
 printf("The integration is: %.3f", intgrl);  
 return 0;  
}  
