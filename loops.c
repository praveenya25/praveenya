#include <stdio.h>
void main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    for(j=5;j>=i;j--)
    {
      printf("01");
    }
    printf("\n");
  }
}
