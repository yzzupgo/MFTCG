#include<bits/stdc++.h>
using namespace std;

int N, A, ans = 1;
int a, b, c, d, e, k;
int main(){
    int min = 9, sum = 0;
    int v[10];
    for(int i=0; i<5; i++)
	cin >> v[i];

    for(int i=0; i<5; i++){
	a = v[i] % 10;
	if(min > a && a!= 0)
	    min = a;	
    }
	

    
    for(int i=0; i<5; i++){
	sum += ceil((double)v[i]/10.0) * 10;	
    }
    cout << sum - 10 + min << "\n";
    // if(ans == 1)
    // 	cout << "Yay!" << "\n";
    // else
    // 	cout << ":(" << "\n";

 }


