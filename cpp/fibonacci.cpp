#include <iostream>
#include <vector>
using namespace std;
/*
 Around 95th term the function start producing wrong results
 due to integer overflow
 
 Will try to fix later
 
 */
unsigned long long fibonacci(int n){
  vector<unsigned long long> fib_nums{0, 1};
  
  for (int i = 1; i < n; i++){
    int last_index, before_last_index;
    
    last_index = fib_nums.size() - 1;
    before_last_index = fib_nums.size() - 2;
    
    fib_nums.push_back((fib_nums[before_last_index] + fib_nums[last_index]));
    
    //cout << fib_nums[last_index] << endl;
 }
  
return fib_nums[n-1];
}

int main(){
  cout << "Enter the number in Fibonacci sequence you would like to see: " << endl;
  int n;
  cin >> n;
  //fibonacci(n);
  unsigned long long answer = fibonacci(n);
  cout << "Number " << n << " in Fibonacci sequence is " << answer << endl;
  
  return 0;
}
