#include <iostream>

using namespace std;

int main(){
    unsigned long int n;
    unsigned long int sum;

    while (cin>>n){
        if(n!=0){
            while (n>9){
                sum = n%10;
                n = n/10;
                n = n+sum;
            }
            cout<<n<<endl;
        }
    }    
    return 0;
}