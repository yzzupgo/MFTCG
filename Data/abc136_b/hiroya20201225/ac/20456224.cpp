#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin>>N;
if(0<N&&N<10)
cout<<N;
if(10<=N&&N<100)
cout<<9;
if(100<=N&&N<1000)
cout<<N-99+9;
if(1000<=N&&N<10000)
cout<<909;
if(10000<=N&&N<100000)
cout<<N-9999+900+9;
if(N==100000)
cout<<90909;
}
