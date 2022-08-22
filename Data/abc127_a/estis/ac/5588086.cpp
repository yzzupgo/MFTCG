#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#define lli long long
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(),i.rend()
#define rep0(i,j) for(int i=0;i<j;i++)
#define rep1(i,j) for(int i=1;i<=j;i++)
#define rep0d(i,j) for(int i=j-1;i>=0;i--)
#define MAX 1000000007
using namespace std;
int main() {
int a, b, c;
cin >> a >> b >> c;
if(a<=5){
cout << 0;
}
else if(a>=13){
cout << b;
}
else cout << b / 2;
}
