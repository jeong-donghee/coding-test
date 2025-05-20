#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int n = 9, r = 7;

void solve() {
    int sum = 0;
    for(int i = 0; i < r; i++) {
        sum += arr[i];
    }
    if(sum==100) {
        sort(arr.begin(), arr.begin() + 7);
        for(int i = 0; i < r; i++) {
            cout << arr[i] << '\n';
        }
        exit(0);
    }
}

void makePermutation(int n, int r, int depth) {
    if(r==depth) {
        solve();
        return;
    }
    
    for(int i = depth; i < n; i++) {
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth + 1);
        swap(arr[i], arr[depth]);
    }
}

int main() {
    for(int i = 0; i < n; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    
    makePermutation(n, r, 0);
    
    return 0;
}