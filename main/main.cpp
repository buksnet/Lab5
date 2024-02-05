#include <iostream>

using namespace std;

const int N = 5;
int main(){
    srand(time(0));
    
    int arr[N], matr[N][N], tmp;

    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i<N; i++){
        tmp = 0;
        for (int j = 0; j<N-1; j++){
            matr[i][j] = rand()%101-50;
            tmp += matr[i][j];
        }
        matr[i][N-1] = arr[i] - tmp;
    }

    for (int i = 0; i<N; i++){
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}