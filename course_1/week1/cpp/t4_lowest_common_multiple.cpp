/*
 least common multiple = abs(a * b)/gcd(a,b)
 
 */

#include <iostream>
#include <cmath> // for abs()
using namespace std;

long long euclid_GCD(long long num1, long long num2){
  if (num2 == 0){
    return num1;
  }
  
  long long num1_compliment;
  num1_compliment = num1 % num2;
  return euclid_GCD(num2, num1_compliment);
}

int main(){
  // gcd - greatest common divisor
  // lcm - least common multiple
  long long a, b, gcd, lcm;
  //cout << "Enter the first number: " << endl;
  cin >> a;
  //cout << "Enter the second number: " << endl;
  cin >> b;
  
  gcd = euclid_GCD(a, b);
//  cout << "The GCD of " << a << " and " << b << " is " << //result << endl;
  lcm = (long long)abs(a * b)/gcd;
  cout << lcm << endl;
  
  return 0;
  
  
}

