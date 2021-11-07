#include <iostream>
#include <vector>
#include <cstdlib> //used to generate random functions

using std::vector;
using std::cin;
using std::cout;


//NAIVE IMPLEMENTATION - WORKS CORRECT BUT TOO SLOW

long long max_pairwise_product(const vector<int>& numbers){
  long long result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if (((long long)numbers[i]) * numbers[j] > result){
        result = ((long long)numbers[i]) * numbers[j];
      }
    }
  }
  return result;
}

//IMPLEMENTATION USED FOR SUBMISSION
long long max_pairwise_product_fast(const vector<int>& numbers){
  int n = numbers.size();
  
  int max_index1 = -1;
  for (int i = 0; i < n; i++){
    if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
      max_index1 = i;
  }
  
  int max_index2 = -1;
  for (int j = 0; j < n; j++){
    if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
      max_index2 = j;
    
    //cout << max_index1 << ' ' << max_index2 << "\n";
  }
  return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main(){
  
  //STRESS TEST
  /*
  while (true){
    int n = rand() % 1000 + 2;
    cout << n << "\n";
    vector<int> a;
    for (int i = 0; i < n; i++){
      a.push_back(rand() % 100000);
    }
    for (int i = 0; i < n; i++){
      cout << a[i] << ' ';
    }
    cout << "\n";
    long long res1 = max_pairwise_product(a);
    long long res2 = max_pairwise_product_fast(a);
    if (res1 != res2){
      cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
      break;
    }
    else {
      cout << "OK\n";
    }
  }
  */
  //END OF STRESS TEST
  
  int n;
  cin >> n;
  vector<int> numbers(n);
  for (int i = 0; i < n; i++){
    cin >> numbers[i];
  }
  
  long long result = max_pairwise_product_fast(numbers);
  cout << result << "\n";
  
  
  return 0;
}
