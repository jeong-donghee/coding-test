#include<bits/stdc++.h>
using namespace std;

int arr['z'-'a'+1];
string str;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;

    for(char c : str) arr[c - 'a']++;

    for(int i : arr) cout << i << " ";
    
    return 0;
}