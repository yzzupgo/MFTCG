#include <cmath>
#include <iostream>
#include <functional>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int l=L,A[N],sum=0;
if(L>=0){
for(int i=0;i<N-1;i++){
l++;
sum += l;
}
}
else if(L < 0 && L+N < 0){
for(int i=0;i<N-1;i++){
sum += l;
l++;
}
}
else{
for(int i=0;i<N;i++){
sum += l;
l++;
}
}
cout << sum << endl;
}
