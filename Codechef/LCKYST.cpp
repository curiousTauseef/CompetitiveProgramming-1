#include <iostream>
#include <cmath>

using namespace std;

int findPower2 (long long number){
  int count2 = 0;
  while (number % 2 == 0){
    number /= 2;
    count2++;
  }
  return count2;
}

int findPower5 (long long number){
  int count5 = 0;
  while (number % 5 == 0){
    number /= 5;
    count5++;
  }
  return count5;
}

int main(){
  int N;
  long long A[100001];
  cin >> N;
  for (int i = 0; i < N; i++){
    long long p, q, a, b;
    int count5 = 0, count2 = 0;
    cin >> A[i];
    count5 = findPower5(A[i]);
    count2 = findPower2(A[i]);
    for (;count2 < count5; count2+=2)
      A[i] *= 4;
    cout << A[i] << endl;
  }
}
