#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  int x, y, z;
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    z += y - x + 1;
  }
  cout << z << endl;
  
}