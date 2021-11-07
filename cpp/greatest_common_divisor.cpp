#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int euclid_GCD(int num1, int num2){
  if (num2 == 0){
    return num1;
  }
  
  int num1_compliment;
  num1_compliment = num1 % num2;
  return euclid_GCD(num2, num1_compliment);
}

int main(){
  
  int a, b, result;
  cout << "Enter the first number: " << endl;
  cin >> a;
  cout << "Enter the second number: " << endl;
  cin >> b;
  
  result = euclid_GCD(a, b);
  cout << "The GCD of " << a << " and " << b << " is " << result << endl;
  
  return 0;
  
}
