// problem link
// https://leetcode.com/problems/defuse-the-bomb/

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();

        for(int i = 0; i < 2*n;i++){
            code.push_back(code[i%n]);
        }
        vector<int> res(n);
        int s, e;
       if(k > 0){
        s = 1;
        e = k;
       }else if(k < 0){
        s = n - abs(k);
        e = s + abs(k) - 1;
       }

        if(k){
            for(int i = n;i < 2*n;i++){
                int sum = 0;

                for(int j = s;j <= e;j++){
                    sum += code[j];
                }
                s++;
                e++;
                res[i%n] = sum;
            }
        }

        return res;

    }
};
