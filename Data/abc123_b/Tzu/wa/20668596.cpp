#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
long long N;
int a[5];
int flag =0;
int t=10;
int sum;

int main()
{
    for (int i=0; i<4; i++){
        cin >> a[i];
    }

    for (int i=0; i<4; i++){

        if(t>a[i]%10){
            flag = i;
        }

    }

    for (int i=0; i<4; i++){
        sum = a[i] + a[i]%10;
    }

    sum -= a[flag]%10;

    cout << sum;

         return 0;
}