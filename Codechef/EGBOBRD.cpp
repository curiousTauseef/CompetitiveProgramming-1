#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int T;
  cin >> T;
  while (T--){
    int N, A[1000001];
    long long K, packets = 0, packetPieces = 0;
    cin >> N >> K;
    //packetPieces = K;
    for (int i = 0; i < N; i++){
      cin >> A[i];
      if (packetPieces < A[i]){
        int temp = (A[i]-packetPieces)/K;
        packets += temp;
        packetPieces += (temp*K);
        if (packetPieces < A[i]){
          packets++;
          packetPieces += K;
        }
      }
      packetPieces -= A[i];

      if (packetPieces > 0)
        packetPieces--;
    }
    cout << packets << endl;
  }
}
