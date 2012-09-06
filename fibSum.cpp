#include <iostream>

using std::cout;
using std::endl;

int fib(int n);

int main() {
  int num = 0;
  int sum = 0;
  for (int i=0; i<33; ++i) {
    num = fib(i);
    if(num%2 == 0) {
      sum += num;
    } 
  }
  cout<< sum <<endl;
  return 0;
}



int fib(int n) {
  if (n <= 1) {
    return 1;
  }
  else {
    return fib(n-1) + fib(n-2);
  }

}
