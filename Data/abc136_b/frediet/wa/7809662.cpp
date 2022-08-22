#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
#define _GLIBCXX_DEBUG
static const int MAX = 20;
int main(){
int N, count = 0;
cin >> N;
rep2(i, 1, N+1){
if(i%2 == 1) count++;
}
cout << count << endl;
}
