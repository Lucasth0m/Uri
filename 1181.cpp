#include <bits/stdc++.h>

using namespace std;

int main(){

    int l;
    float sum;
    char t;
    float ma[12][12];

    cin >> l >> t;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ma[i][j];
        }
    }

    if(t=='S'){

        for (int i = 0; i < 12; i++){
            sum+=ma[l][i];
        }
        printf("%.1lf",sum);
        //cout << sum << "\n";
    } else{
        for (int i = 0; i < 12; i++){
            sum+=ma[l][i];
        }
        printf("%.1lf",sum/12);
        //cout << sum/12 << "\n";
    }
    if(t=='M'){

        for (int i = 0; i < 12; i++){
            sum+=ma[l][i];
        }
        printf("%.1lf",sum);
        //cout << sum << "\n";
    } else{
        for (int i = 0; i < 12; i++){
            sum+=ma[l][i];
        }
        printf("%.1lf",sum/12);
        //cout << sum/12 << "\n";
    }

    
    


    return 0;
}