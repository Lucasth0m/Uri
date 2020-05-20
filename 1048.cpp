#include <bits/stdc++.h>

using namespace std;

void adjust(float s){

    float ns, reajust;
    int per100;

    if (s<=400){
        ns=s*1.15;
        per100=15;
    }
    
    if (s>400 && s<=800){
        ns=s*1.12;
        per100=12;
    }

    if (s>800 && s<=1200){
        ns=s*1.10;
        per100=10;
    }    
    if (s>1200 && s<=2000){
        ns=s*1.07;
        per100=7;
    }

    if (s>2000){
        ns=s*1.04;
        per100=4;
    }

    reajust=ns-s;

    cout << "Novo salario: " << fixed << setprecision(2) << ns << endl << "Reajuste ganho: " << fixed << setprecision(2) << reajust << endl << "Em percentual: "<< per100 << " %"<< endl;
}

int main(){

    float salary;

    cin >> salary;
    adjust(salary);

    return 0;
}