#include<bits/stdc++.h>
using namespace std;

int arr[26];
int n;
string str, result;

int main() {
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> str;
        arr[str[0]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        if(arr[i]>=5) result+=(i+'a');
    }
    if(result.size()) cout << result;
    else cout << "PREDAJA";
    
    return 0;
}