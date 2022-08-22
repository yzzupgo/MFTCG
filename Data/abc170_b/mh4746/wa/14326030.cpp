#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#define pb push_back
#define xx first
#define yy second
#define PI acos(-1)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define NL printf("\n")
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main()
{
int t=1;
string s;
while(t--)
{
int x,y;
cin >> x >> y;
int yes = 0;
for(int i = 0; i<=x; i++){
for(int j = i; j<=x; j++){
if(i*2+j*4==y)
yes= 1;
}
}
if(yes){
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
return 0;
}
