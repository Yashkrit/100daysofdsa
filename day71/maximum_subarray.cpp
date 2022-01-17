#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int max_sum = nums[0];
    int cur_sum = nums[0];
    for(int i=1;i<nums.size();i++){
        cur_sum = max(nums[i],cur_sum+nums[i]);
        max_sum = max(max_sum,cur_sum);
    }
    return max_sum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    return 0;
}