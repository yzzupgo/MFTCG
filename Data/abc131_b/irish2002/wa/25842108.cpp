#include <bits/stdc++.h>
using namespace std;
int main () {
int N,L;
cin>>N>>L;
if(L-1>0){
cout<< N*L+N*(N-1)/2-(L-1)<<endl;
}
else if(L+N-1<0){
cout<< N*L+N*(N-1)/2-(L+N-1)<<endl;
}
else{
cout<< N*L+N*(N-1)/2<<endl;
}
}
