#include <stdio.h>
void print(int, int);
int main()
{
  int m,n;
  scanf("%d", &m);
  scanf("%d",&n);
  print(m, n);
  return 0;
}
void print(int s, int n) {
  if (s > n)
    return;
  printf("%d ", s);
  print(++s, n);
}
