#include <bits/stdc++.h>
using namespace std;

int k = 3;
int n = 5;

void print(vector<int> b){
    for(int i : b) cout << i << " ";
    cout << '\n';
}

void combi(int start, vector<int> b) {
    if(b.size() == k){
        print(b);
        return;
    }

    for(int i=start+1; i < n ; i++) {
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }

    return;
}

int main()
{
    vector<int> a = {1,2,3,4,5};
    int n = 3;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            for(int k=0;k<j;k++){
                cout << i << ":" << j << ":" << k << endl;
            }
        }
    }

    vector<int> b;
    combi(-1, b);

    return 0;
}