#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nanjangE;
    for(int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        nanjangE.push_back(num);
    }
    
    int sum = 0;
    for(int i:nanjangE) sum+=i;
    
    vector<int> result;
    
    for(int i = 0; i< 9 ; i++){
        for(int j = 0; j<i; j++){
            if(sum - (nanjangE[i] + nanjangE[j]) == 100){
                for(int k=0;k<9;k++){
                    if(k!=i && k!=j){
                        result.push_back(nanjangE[k]);
                    }
                }
                
                sort(result.begin(), result.end());
                for(int k : result) cout << k << '\n';
                return 0;
            }
        }
    }
    
    return 0;
}