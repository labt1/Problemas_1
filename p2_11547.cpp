#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin>>t;
    int res;
    for (int i = 0; i < t; i++){
        cin>>n;
        res = (((n*63 + 7492)*5)-498);
        cout<<abs(res/10)%10<<endl;
    }
    
    return 0;
}