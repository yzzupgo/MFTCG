#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 1000000000; // 10^9

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ans=10;
  int cnt=0;
  for(int i=0;i<5;i++) {
    int temp;
    cin >> temp;
    if (temp % 10 != 0 && temp % 10 < ans) {
      ans = temp % 10; 
    }
    if(temp % 10 != 0) {
      int r = temp + 10;
      r /= 10;
      // cout << "this is r: " << r << '\n';
      cnt += r * 10;
    }
    else {
      cnt += temp;
    }
  }

  cout << cnt-10+ans << '\n';
  
  return 0;
}

