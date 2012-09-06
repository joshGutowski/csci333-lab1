#include <iostream>

using std::cout;
using std::endl;

int main() {
  // cout<<"hello world!"<<endl;

  int sum = 0;
  for(int i= 0; i < 1000; ++i) {
    if(i%3 == 0 || i%5 == 0) {
      sum = sum + i;
    }
  }
  cout <<"The sum of all natural numbers below 1000 that are multiples of 3 or 5 is"<< endl;
  cout <<sum <<endl;
  return 0;
}
