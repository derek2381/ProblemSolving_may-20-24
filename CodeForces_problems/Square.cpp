// problem link
// https://codeforces.com/problemset/problem/1921/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[4][4];
        for(int i = 0; i <4;i++){
            cin >> arr[i][0] >> arr[i][1];
        }

        int area;
        if(abs(arr[0][0] - arr[1][0]) > 0){
            area = abs(arr[0][0] - arr[1][0]);
        }else{
            area = abs(arr[0][1] - arr[1][1]);
        }


        cout << area*area << endl;
    }
}
