 #include <stdio.h>
 
 int main() {
   int x = 2;
   int y = 4;
   int z = sum(x, y);
   printf("%d + %d = %d\n", x, y, z);
   return 0;
 }

int sum(int x, int y) {
  int z = x + y;
  return z;
}
