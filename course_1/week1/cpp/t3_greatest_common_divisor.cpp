#include <iostream>
using std::cout;
using std::cin;
using std::endl;

long long euclid_GCD(long long num1, long long num2){
  if (num2 == 0){
    return num1;
  }
  
  long long num1_compliment;
  num1_compliment = num1 % num2;
  return euclid_GCD(num2, num1_compliment);
}

int main(){
  
  long long a, b, result;
  //cout << "Enter the first number: " << endl;
  cin >> a;
  //cout << "Enter the second number: " << endl;
  cin >> b;
  
  result = euclid_GCD(a, b);
//  cout << "The GCD of " << a << " and " << b << " is " << //result << endl;
  
  cout << result;
  
  return 0;
  
}
