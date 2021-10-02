#include<bits/stdc++.h>
#include<vector>

using namespace std;



int main() {

  int row, test;

  cin >> row >> test;

  vector<vector<int>> arr;

  for (int i = 0; i < row; ++i) {

    int column;

    cin >> column;

    vector<int> charr;

    for (int j = 0; j < column; ++j) {

      int a;

      cin >> a;

      charr.push_back(a);

    }

    arr.push_back(charr);

  }

  for (int l = 0; l < test; ++l) {

    int i, j;

    cin >> i >> j;

    cout << arr[i][j] << endl;

  }

  return 0;

}
