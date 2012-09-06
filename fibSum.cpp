#include <iostream>

using std::cout;
using std::endl;

int fib(int n);

int main() {
  int num = 0;
  int sum = 0;
  int iterator = 0;

  while(num < 4000000) {
    num = fib(iterator);
    if(num%2 == 0) {
      sum += num;
    }
    iterator ++;
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
