#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
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

        if(t>a[i]%10 && a[i]%10!=0){
            t=a[i]%10;
            flag = i;
        }

    }

    for (int i=0; i<5; i++){
        if(a[i]%10!=0){
            sum += a[i] + (10-a[i]%10);
        }
        else{
            sum += a[i];
        }
    }

        if(a[flag]%10!=0){
            sum -= (10-a[flag]%10);
        }
    

    cout << sum;

         return 0;
}