#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, L ;
cin >> N >> L ;
int allT = N*L + (N*(N-1))/2 ;
int minDiff ;
int minPos = -1 ;
int diff ;
for ( int i = 0 ; i < N ; i++ ){
diff = abs(L+i) ;
if ( minPos < 0 ){
minDiff = diff ;
minPos = i ;
continue;
}
if ( diff < minDiff ){
minDiff = diff ;
minPos = i ;
}
}
cout << allT-(L+minPos) << endl;
return 0;
}
