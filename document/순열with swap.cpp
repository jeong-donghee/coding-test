#include<bits/stdc++.h>
using namespace std;

int arr[] = {1,2,3,4,5};
int r = 5;
int sum = 0;

void makePermutation(int n, int r, int depth){
    if(r == depth){
        for(int i : arr) cout<< i << " ";
        cout << '\n';
        sum ++;
    }

    for(int i = depth; i<n; i++) {
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth+1);
        swap(arr[i], arr[depth]);
    }
}

int main() {

    makePermutation(5, r, 0);
    cout << sum << '\n';

    return 0;
}