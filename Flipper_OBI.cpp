#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  char result[2][2] = {{'C', 'C'}, {'B', 'A'}};
  int p, r;

  scanf("%d %d", &p, &r);
  printf("%c\n", result[p][r]);

  return 0;
}
