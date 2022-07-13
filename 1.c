#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d",&n);

  if( (n & 1) == 0 ){  //&を==より先に処理させるために()括弧を付けた
    printf("%d は偶数です\n", n);
  }
  return 0;
}
