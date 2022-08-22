#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using pii = pair<int, int>;
#define rep(i,n) for(int i=0; i<(int)(n);i++)

int main(){
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  vi amari(5);
  amari.at(0) = a%10;
  amari.at(1) = b%10;
  amari.at(2) = c%10;
  amari.at(3) = d%10;
  amari.at(4) = e%10;
  sort(amari.begin(),amari.end());
  int mini = 0;
  rep(i,4){
    if(amari.at(i) == 0) continue;
    mini = amari.at(i);
    break;
  }
  if(mini == 0){
    cout << a+b+c+d+e << endl;
    return 0;
  }
  a = ((a+9)/10)*10;
  b = ((b+9)/10)*10;
  c = ((c+9)/10)*10;
  d = ((d+9)/10)*10;
  e = ((e+9)/10)*10;
  cout << a+b+c+d+e-10+mini << endl;
}
