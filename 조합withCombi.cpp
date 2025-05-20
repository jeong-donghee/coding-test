#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {1,2,3,4,5};
vector<int> v;
int r = 3;

void combi(int start) {
    if(v.size() == r) {
        for(int i : v) cout << i << " ";
        cout << '\n';
        return;
    }

    for(int i=start;i<arr.size();i++){
        v.push_back(arr[i]);
        combi(i+1);
        v.pop_back();
    }
}

int main() {
    combi(0);

    return 0;
}
