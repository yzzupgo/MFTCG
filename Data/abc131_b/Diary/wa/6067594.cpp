#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >>N>>L;
vector<int> a(0);
for(int i = 1; i<N+1 ;i++)
a.push_back(i+L-1);
int tsum =0;
for(int i =0;i<N;i++)
tsum += a.at(i);
int ko =0;
for(int i =0;i<N;i++){
for(int j =1;j<N+1;j++){
if(j+L-1 ==i || j+L-1 == -i){
cout << tsum - (j+L-1);
ko ++;
break;
}
}
if(ko ==1)
break;
}
}
