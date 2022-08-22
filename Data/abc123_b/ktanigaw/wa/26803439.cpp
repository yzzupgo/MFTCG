#include <stdio.h>
#include <string.h>

int main()
{
  int array[5];
  int sum = 0;
  for(int i = 0; i < 5; i++)
  {
    scanf("%d", &array[i]);
    sum += array[i];
    if(array[i] % 10 != 0)
    {
      sum += (10 - (array[i] % 10));
    }
  }
  for(int i = 1; i < 10; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      if(array[j] % 10 == i)
      {
        sum -= (10 - i);
        printf("%d", sum);
        return (0);
      }
    }
  }
}