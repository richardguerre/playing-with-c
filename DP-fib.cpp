#include <iostream>
using namespace std;

struct storefib {
  int n = 0;
  double cur = 0;
};

void store(storefib stored[]);

int fib(int n){
  unsigned long long prev[2] = {1, 1};
  unsigned long long cur;
  if(n==0 || n==1 || n==2)
    return 1;
  else{
    for(int i = 2; i < n; i++){
      cur = prev[0] + prev[1];
      prev[0] = prev[1];
      prev[1] = cur;
    }
    return cur;
  }
  return -1;
}

int main(){
  fib(47);
  return 0;
}
