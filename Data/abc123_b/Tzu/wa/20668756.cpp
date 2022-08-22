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
    for (int i=0; i<5; i++){
        cin >> a[i];
    }

    for (int i=0; i<5; i++){

        if(t>a[i]%10){
            t=a[i]%10;
            flag = i;
        }

    }

    for (int i=0; i<5; i++){
        sum += a[i] + (10-a[i]%10);
    }

    sum -= (10-a[flag]%10);

    cout << sum;

         return 0;
}