
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
修改了这个
    int minIncrementForUnique(vector<int>& A) {
        bool hashTable[81000] = {false};
        sort(A.begin(),A.end());
        int size = (int)A.size();
        int ans = 0;
        

        for(int i = 0;i < size;i++){
            int temp = A[i];
            while(hashTable[temp] == true){
                ans++;
                temp++;
            }
            hashTable[temp] = true;
        }
        return ans;
    }
};
int main() {
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    a.push_back(7);
    Solution s;
    cout<<s.minIncrementForUnique(a)<<endl;
    return 0;
}