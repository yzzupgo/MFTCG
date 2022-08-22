#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  vector<float> D(5);
  float temp;
  for (int i = 0; i < 5; i++) {
  	cin >> temp;
    D.at(i) = temp / 10.;
  }
  
  float i, f_min = 1.;
  int ind;
  for (int j = 0; j < 5; j++) {
    float f = modf(D.at(j), &i);
    if (f > 0 && f < f_min) {
      ind = j;
      f_min = f;
    }
  }
  int s = 0;
  for (int j = 0; j < 5; j++) {
    if (j == ind) {
      s += D.at(j) * 10;
    } else {
      s += ceil(D.at(j)) * 10;
    }
  }
  cout << s << endl;
}