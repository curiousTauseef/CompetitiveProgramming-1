#include <iostream>

using namespace std;

int main(){
	long long T, N, M, temp, allocated;
	cin >> T;
	while (T--){
		cin >> N;
		temp = 0;
		allocated = 0;
		for (int i = 0; i < N; i++){
			cin >> M;
			if (M > temp){
				long long temporary = M - temp;
				temp += temporary;
				allocated += temporary;
				//cout << temp << " " << allocated << endl;
			}
			else if (M < temp)
				temp -= (temp-M);
		}
		cout << allocated << endl;
	}
}