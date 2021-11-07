/*
 by V.Solovyov
 Nov 7, 2021
 
 Around 95th term the function start producing wrong results
 due to integer overflow
 
 For this problem we only need to calculate the 60 numbers in fibonacci sequence, since the The sequence of final digits in Fibonacci numbers repeats in cycles of 60.
 
 For more math details see:
 https://math.stackexchange.com/questions/113536/fibonaccis-final-digits-cycle-every-60-numbers
 */

#include <iostream>
#include <vector>
using namespace std;

/* Calculate last digits of the first 60 numbers in Fibonacci sequence
*/
vector<int> fibonacci_60_digits(){
  vector<unsigned long long> fib_nums{0, 1};
  
  for (int i = 0; i <= 60; i++){
    int last_index, before_last_index;
    
    last_index = fib_nums.size() - 1;
    before_last_index = fib_nums.size() - 2;
    
    fib_nums.push_back((fib_nums[before_last_index] + fib_nums[last_index]));
 }
  
  vector<int> last_digits; //result vector of last digits
  for (auto i: fib_nums){
    last_digits.push_back(i%10);
  }
  
return last_digits;
}

int main(){
  int n;
  cin >> n;
  
  vector <int> digits;
  digits = fibonacci_60_digits();
  cout << digits[n % 60] << endl;
}
