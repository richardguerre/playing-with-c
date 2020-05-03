#include <iostream>
using namespace std;

int fib(const int n){
  if (n==0 || n==1 || n==2)
    return 1;
  else
    return fib(n-1) + fib(n-2);
}

int main(){
  cout << fib(42) << endl;

  return 0;
}
