#include<iostream>

using namespace std;

int main() {
    int problems;
    char c;
    int rows, columns;
    int res;
    cin >> problems;

    for(int i = 0; i < problems; i++){
        cin >> c >> rows >> columns;
        if(c == 'r')
            cout << min(rows, columns) << endl;

        if(c == 'k'){
            res = 0;
            for (int i = 0; i < rows; i++) {
                for (int j = (i % 2 == 0 ? 0 : 1); j < columns; j += 2) {
                    res++;
                }
            }
            cout << res << endl;
        }

        if(c == 'Q')
            cout << min(rows, columns) << endl;

        if(c == 'K'){
            res = 0;
            for (int i = 0; i < rows; i += 2) {
                for (int j = 0; j < columns; j+=2) {
                    res++;
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}