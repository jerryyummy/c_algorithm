#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {//返回数组最大子序列
        if(nums.size() == 1) return nums[0];//如果数组长度为1，直接返回
        return findSubArray(nums,0,nums.size()-1);
    }

    int findSubArray(vector<int>& nums, int left, int right){//寻找最大子序列
        if(left == right)//如果左边界等于右边界
            return nums[left];//返回这个数
        if(left > right)
            return INT_MIN;//返回无穷小
        int mid = (left+right)/2;
        int leftSum = findSubArray(nums,left,mid-1);//计算左边部分最大子序列
        int rightSum = findSubArray(nums,mid+1,right);//计算右边部分最大子序列

        // 计算穿过中间的最大子序和
        int midSumLeft = 0;     // 初始值为0 未选择任何左序列
        int midSumRight = 0;
        int tmp = 0;
        for (int i = mid-1; i >= left; --i) {
            tmp += nums[i];
            midSumLeft = max(midSumLeft, tmp);
        }
        for (int i = mid+1,tmp = 0; i <= right ; ++i) {
            tmp += nums[i];
            midSumRight = max(midSumRight, tmp);
        }

        return max(max(leftSum,rightSum), midSumLeft+midSumRight+nums[mid]);
    }
};

int main(){
    int n,temp;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        array.push_back(temp);
    }
    Solution solution=*new Solution();
    cout << solution.maxSubArray(array);
}