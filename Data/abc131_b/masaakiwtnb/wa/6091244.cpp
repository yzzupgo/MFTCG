#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(void){
int N, L;
int ALL_TASTE = 0;
cin >> N >> L;
vector<int> taste(N);
vector<int> taste_abs(N);
for(int i=0;i<N;i++){
ALL_TASTE += L+i-1;
}
for(int k=0;k<N;k++){
taste[k] = L+k-1;
taste_abs[k] = abs(taste[k]);
}
vector<int>::iterator minIt = min_element(taste_abs.begin(), taste_abs.end());
size_t minIndex = distance(taste_abs.begin(), minIt);
cout << ALL_TASTE-taste[minIndex] << endl;
return 0;
}
