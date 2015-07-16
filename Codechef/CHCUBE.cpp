#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int matrix[6][3], T;
  cin >> T;
  while (T--){
    char color[10];
    int k = -1, flag = 0;
    for (int i = 0; i < 6; i++){
      for (int j = 0; j < 3; j++){
        matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 6; i++){
      cin >> color;
      if (i % 2 == 0)
        k++;
      if (strcmp(color, "black") == 0)
        matrix[0][k] = 1;
      else if (strcmp(color, "blue") == 0)
        matrix[1][k] = 1;
      else if (strcmp(color, "green") == 0)
        matrix[2][k] = 1;
      else if (strcmp(color, "red") == 0)
        matrix[3][k] = 1;
      else if (strcmp(color, "yellow") == 0)
        matrix[4][k] = 1;
      else
        matrix[5][k] = 1;
    }
    /*
    //Printing the matrix
    for (int i = 0; i < 6; i++){
      for (int j = 0; j < 3; j++){
        cout << matrix[i][j] << " ";
      }
      cout << "\n";
    }
    cout << "\n";
    */
    int i, j;
    for (i = 0; i < 6; i++){
      for (j = 0; j < 3; j++){
        if (matrix[i][j] != 1){
          break;
        }
      }
      if (j == 3){
        cout << "YES\n";
        break;
      }
    }
    if (i == 6)
      cout << "NO\n";
  }
}
