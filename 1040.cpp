#include <bits/stdc++.h>

using namespace std;

void Exame(float m){
    float ex;
    cin >> ex;
    cout << "Nota do exame: " << ex << endl;
    if(((ex+m)/2)>=5){
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }
    cout << "Media final: " << fixed << setprecision(1) << ((ex+m)/2) << endl;
}

int main(){
    float n1, n2, n3, n4, media=0;

    cin >> n1 >> n2 >> n3 >> n4;
    media=(n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media>=7){
        cout << "Aluno aprovado." << endl;
    } else{
        if (media<5)
        {
            cout << "Aluno reprovado." << endl;
        } else
        {
            cout << "Aluno em exame." << endl;
            Exame(media);
        }
        
        
    }
    
    


    return 0;
}