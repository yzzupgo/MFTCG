#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
#define REPR(i,n) for(int i = n; i >= 0; i--)
#define FOR(i,m,n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int inputValue(){
int a;
cin >> a;
return a;
};
void inputArray(int * p, int a){
REP(i, a){
cin >> p[i];
}
};
void inputVector(vector<int> * p, int a){
REP(i, a){
int input;
cin >> input;
p -> push_back(input);
}
}
int main()
{
int N = inputValue();
int val1;
if(N < 10){
val1 = N;
}else if(10 <= N && N < 100){
val1 = 9;
}else if(100 <= N && N < 1000){
val1 = N - 90;
}else if(1000 <= N && N < 10000){
val1 = 909;
}else if(10000 <= N && N < 100000){
val1 = N - 9090;
}else{
val1 = 90909;
}
cout << val1 << endl;
}
