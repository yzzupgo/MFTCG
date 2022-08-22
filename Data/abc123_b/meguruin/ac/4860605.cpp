#include <iostream>
#include <string.h>
#include <map>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
    int a[5],b[5],min;
    int minf;
    min = 9;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        for(int j = 0; j < 700; j ++){
            if(a[i] >= j * 10 && a[i] < (j+1)*10){
                b[i] = 10*(j+1);
            }
            }
        }
        int n;
     for(int i = 0; i < 5; i++){
         n = a[i]-b[i]+10;
         if(n == 0) 
         {n = 10;
         b[i]-= 10;}
         if(min >= n){
             min = n;
             minf = i;
         }
     }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        if(i == minf){
            sum += a[i];
             

        }
        else{
            sum += b[i];
             
        }
    }
    cout << sum << "\n";
    
    return 0;
}