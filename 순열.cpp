#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void print(vector<int> v){
    for(int i : v) cout << i << " ";
    cout << '\n';
}

void makePermutation(int n, int r, int depth){
    // cout << n << ":" << r << ":" << depth << '\n';
    if(r==depth){
        print(v);
        return;
    }

    for(int i=depth;i<n;i++){
        swap(v[i], v[depth]);
        makePermutation(n,r,depth+1);
        swap(v[i], v[depth]);
    }

    return;
}

int main()
{
    vector<int> a = {1,2,3};
    sort(a.begin(), a.end());
    // int a[] = {1,2,3};
    do{
        for(int i : a) cout<<i<< " ";
        cout << '\n';
    // } while(next_permutation(a, a+3));
    } while(next_permutation(a.begin(), a.end()));

    cout << "======" << endl;

    for(int i=1;i<=3;i++) v.push_back(i);
    makePermutation(3,3,0);

    return 0;
}