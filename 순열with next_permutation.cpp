#include <bits/stdc++.h>
using namespace std;

int arr[] = {1,2,3,4,5};
int sum = 0;

int main() {

    do {
        for(int i : arr) cout << i << " ";
        cout << '\n';
        sum ++;
    } while (next_permutation(arr, arr + 5));

    cout << sum << '\n';

    // n! / (n-r!)

    return 0;
}