#include<iostream>
#include<vector>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;
int main(void){
long long int N;
cin >> N ;
if( N < 10 ){
cout << N << endl;
} else if (10 <= N && N < 100){
cout << 9 << endl;
} else if (100 <= N && N <1000){
int k100 = N % 1000 ;
cout << k100-99 + 9 <<endl ;
}else if ( 1000<= N && N < 10000){
cout<<909 <<endl;
} else if ( 10000 <= N && N <100000) {
long long int k10000 ;
int k10;
k10000 = N % 100000 ;
cout << k10000-9999 + 909 <<endl;
}else {
cout << 90909 <<endl;
}
return 0;
}
