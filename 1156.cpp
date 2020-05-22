#include <bits/stdc++.h>

using namespace std;

int main(){

    double i ,d=2;
    double sum=1;

    for (i = 3; i <= 39; i+=2){
        sum+=(i/d);
        d=d*2;
    }
    
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}