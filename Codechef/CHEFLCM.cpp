#include <iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		//double N;
		long long number;
		cin >> number;
		long long sum = 0;
		for (long long i= 1; i * i <= number; ++i) {
			if (number % i == 0) {
				sum += i;
				sum += number / i;
			}
			if (i * i == number) 
				sum -= i;
      }
    //  sum = sum + number;
      cout << sum << endl;
   }
}
