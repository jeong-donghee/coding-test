#include<bits/stdc++.h>
using namespace std;

int arr[] = {1,2,3,4,5};

int main () {

    for(int i = 0; i < 5 ; i ++){
        for(int j = 0; j < i ; j++) {
            for (int k = 0; k<j; k++){
                cout << arr[i] << " " << arr[j] << " " << arr[k] << '\n';
            }
        }
    }

    return 0;
}