#include<bits/stdc++.h>
using namespace std;

int arr[101];
int A, B, C;

int main() {
    cin >> A >> B >> C;
    for(int i=0;i<3;i++){
        int start, end;
        cin >> start >> end;
        for(int j=start;j<end;j++){
            arr[j]++;
        }
    }

    int sum = 0;
    for(int k=1;k<101;k++){
        if(arr[k]==1) sum+=A;
        if(arr[k]==2) sum+=(B*2);
        if(arr[k]==3) sum+=(C*3);
    }

    cout << sum;
    return 0;
}