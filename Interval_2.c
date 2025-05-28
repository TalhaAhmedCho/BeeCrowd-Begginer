#include <stdio.h>

int main()
{

  int N;
  scanf("%d", &N);

  int in = 0, out = 0, num;

  for (int i = 1; i <= N; i++)
  {
    scanf("%d", &num);

    if (num >= 10 && num <= 20)
    {
      in++;
    }
    else
    {
      out++;
    }
  }

  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}