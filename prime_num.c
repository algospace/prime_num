#include <stdio.h>
#include <math.h>

int main( )
{
  int n,i,val1,val2,cout=0;
  printf("Enter Any Number");
  scanf("%d",&n);

  val1=ceil(sqrt(n));
  val2=n;

  for (i=2; i<=val1; i++)
  {
    if (val2%i==0)
      cout=i;
  }
  if ((cout==0 && val2!=1) || val2==2 || val2==3)
    printf("%d is an prime number",val2);

  else
    printf("%d is not a prime number",val2);

  return 0;
}
