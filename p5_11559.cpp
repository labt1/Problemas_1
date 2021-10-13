#include<iostream>

#define MAX 999999

using namespace std;

int main(){
    int N,B,H,W;
	int precio;
	int camas;

    int cost_min;
    while (cin>>N>>B>>H>>W){
        cost_min = MAX;
        for(int i = 0; i < H; i++){
			cin>>precio;
			for(int j = 0; j < W; j++){
				cin>>camas;
				if( camas >= N && cost_min > precio*N )
					cost_min = precio*N;
			}
		}

        if(cost_min > B)
			cout<<"stay home"<<endl;
		else
			cout<<cost_min<<endl;
    }
}