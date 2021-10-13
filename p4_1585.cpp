#include<iostream>

using namespace std;

int main(){
    string cad;
    int n;
    cin>>n;
    int sum=0, cont=0;

    for(int k=0; k < n; k++){
        cin>>cad;
        for (int i = 0; i < cad.size(); i++){
            if (cad[i] == 'O'){
                cont++;
                sum = sum+cont;
            }
            else
                cont=0;
        }
        cout<<sum<<endl;
        sum = 0;
        cont = 0;
    }
    return 0;
}