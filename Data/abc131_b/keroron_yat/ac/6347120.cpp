#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
vector<int> taste(N);
for ( int i = 0 ; i < N ; i++){
taste.at(i) = L + i;
}
int R = 0;
if( L >= 0 )
R = 0;
else if( taste.at(0)<0 && taste.at(N-1)<= 0 )
R = N-1;
else{
for ( int i = 0 ; i < N-1 ; i++){
if(taste.at(i) == 0)
R = i;
if( taste.at(i)<0 && taste.at(i+1)>0 ){
if( 0 - taste.at(i) >= taste.at(i+1) - 0)
R = i + 1;
else
R = i;
}
}
}
int sum = 0;
for ( int i = 0 ; i < N ; i++){
sum += taste.at(i);
}
cout << sum - taste.at(R) << endl;
}
