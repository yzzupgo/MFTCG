#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
int N, L;
int ALL_TASTE = 0;
cin >> N >> L;
vector<int> taste(N);
for(int i=0;i<N;i++){
ALL_TASTE += L+i-1;
}
for(int k=0;k<N;k++){
taste[k] = L+k-1;
}
int min_taste = *min_element(taste.begin(), taste.end());
cout << ALL_TASTE-min_taste << endl;
return 0;
}
