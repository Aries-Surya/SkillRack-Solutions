#include <stdio.h>
int main()
{
  char ch;
  scanf("%c", &ch);
  int ascii_value = (int)ch;
  int unit_digit = ascii_value % 10;
  printf("%d\n", unit_digit);
  return 0;
}
