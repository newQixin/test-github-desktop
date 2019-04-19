//
//  main.cpp
//  test
//
//  Created by 乔运浩 on 2018/11/11.
//  Copyright © 2018 乔运浩. All rights reserved.
//
/*
leetcode 945
变长数组排序后，直接hash，使用线性探查。重复元素占了后边元素位置，和先放后边元素再放重复元素的到的结果是一样的。
*/
#include<iostream>
艰苦开卷考
#include<algorithm>
using namespace std;
class Solution {
public:
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
