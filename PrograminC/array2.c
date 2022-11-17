#include <stdio.h>
int main ()
{
  int n, i, array_nums[10], k;
  printf("Input an integer (2-10)\n");
  scanf("%d", &n);

  if (n>=2 && n<=10)
  {
  k = 0;
 

  for (i = 0; i < 10; i++)
  {

    array_nums[i] = k;
    k++;
     if (k == n)
    {
 k = 0;
    
  }
 
  }
  for (i = 0; i < 10; i++)
  {

    printf("array_nums[%d] = %d\n", i, array_nums[i]);

  }
}
}
