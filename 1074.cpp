#include<bits/stdc++.h>

using namespace std;

int ed(int);

int main(int argc, char const *argv[])
{
    int n,x;  cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> n;
            if (n==0)
    {
        cout << "NULL\n";
    } else
    {
        if(ed(n)){
        cout << "EVEN ";
            if (n>0)
            {
                cout << "POSITIVE\n";
            } else
            {
                cout << "NEGATIVE\n";
            }
        } else
        {
            cout << "ODD ";
            if (n>0)
            {
                cout << "POSITIVE\n";
            } else
            {
                cout << "NEGATIVE\n";
            }
        }   
    }
    }
    

    return 0;
}

int ed(int n){
    if(n%2==0){
        return 1;
    } else {
        return 0;
    }
}