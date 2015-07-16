#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long calculateArea (long long M, long long x[], long long y[]){
	long long area = 0;
	for (int i = 0; i < (M-1); i++){
		area += (x[i]*y[i+1])-(x[i+1]*y[i]);
	}
	area += (x[M-1]*y[0])-(x[0]*y[M-1]);
	area = abs(area);
	return area;
}

int binarySearch (long long element, long long array[], int start, int end){
	int mid;
	mid = (start + end)/2;
	if (element == array[mid])
		return mid;
	else if (element < array[mid])
		return binarySearch(element, array, start, mid);
	else
		return binarySearch(element, array, mid, end);
}

int main(){
	int T, N;
	cin >> T;
	while (T--){
		long long a[100001], sorting[100001];
		cin >> N;
		for (int i = 0; i < N; i++){
			long long M, x[100001], y[100001];
			cin >> M;
			for (int j = 0; j < M; j++){
				cin >> x[j] >> y[j];
			}
			a[i] = calculateArea(M, x, y);
			sorting[i] = a[i];
		}
		sort(sorting, sorting+N);
		for (int i = 0; i < N; i++){
			cout << binarySearch (a[i], sorting, 0, N) << " ";
		}
		cout << "\n";
	}
}