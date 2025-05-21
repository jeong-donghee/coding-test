#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    string tmp;
    
    cin >> str;
    tmp = str;
    
    reverse(tmp.begin(), tmp.end());
    if(str==tmp) cout << 1;
    else cout << 0;
    
    return 0;
}