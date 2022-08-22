#include<iostream>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int left = L;
int right = L + N - 1;
int eat;
if (right <= 0) eat = right;
else if(left >= 0) eat = left;
else eat = 0;
cout << ((N * (left + right)) / 2) - eat;
}
