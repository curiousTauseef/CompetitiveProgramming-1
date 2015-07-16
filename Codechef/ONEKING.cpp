#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int p[N], q[N], count = 0;
		for (int i = 0; i < N; i++)
			cin >> p[i] >> q[i];
		sort(p, p+N);
		sort(q, q+N);
		for (int i = N-1; i >= 0; i--){
			int c = 0;
			for (int j = 0; j < N; j++){
				if (p[i] <= q[j]){
					q[j] = 0;
					c++;
				}
			}
			if (c == 1){
				count++;
				break;
			}
			else if (c >1)
				count++;
			else
				break;
		}
		cout << count << "\n";
	}
}
					
			
