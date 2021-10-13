#include<iostream>

using namespace std;

int min(int& A, int& B){
	if (A<B) return A;
	else return B;
}

int main() {
	int T, t;
	cin>>T;

	for (t = 1; t <= T; t++) {
		int N, duration, Mile = 0, Juice = 0;
		cin>>N;
		for(int i = 0; i < N; i++){
			cin>>duration;
			Mile  += (duration/30 + 1) * 10;
			Juice += (duration/60 + 1) * 15;
		}
		cout<<"Case "<<t<<":";
		if (Mile <= Juice) 
			cout<<" Mile";
		if (Juice <= Mile) 
			cout<<" Juice";
		cout<<" "<< min(Mile, Juice)<<endl;
	}

	return 0;
}