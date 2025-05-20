#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> input;
    for(int i = 0; i < 9; i++){
        int n;
        cin >> n;
        input.push_back(n);
    }
    
    sort(input.begin(), input.end());
    
    do {
        int sum = 0;
        vector<int> result;
        
        for(int i=0;i<7;i++){
            sum+=input[i];
            result.push_back(input[i]);
        }
        
        if(sum==100) {
            sort(result.begin(), result.end());
            for(int i=0; i<7; i++){
                cout << result[i] << '\n';
            }
            break;
        }
    } while(next_permutation(input.begin(), input.end()));
   
    return 0;
}

/*

20
7
23
19
10
15
25
8
13

 */