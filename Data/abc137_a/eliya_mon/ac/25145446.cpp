#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int a,b;
cin >>a>>b;
cout <<max(max(a-b,a+b),b*a);
}
