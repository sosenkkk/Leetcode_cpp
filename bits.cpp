#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1);
       
        for(int i=1; i <=n; i++){
           v[i]= v[i/2]+ i%2;
        }
        return v;
    }
};

int main(){
    Solution s ;
    int x;
    cin >> x;
    vector<int> ans = s.countBits(x);
    for (int i = 0; i < x; i++)
    {
        cout<< ans[i];
    }
    
}