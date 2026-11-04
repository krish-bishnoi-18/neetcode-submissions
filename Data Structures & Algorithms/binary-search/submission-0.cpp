class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,end=nums.size()-1;
        while(s<=end){
            int mid=(s+end)/2;
            if(nums[mid]>target){
                end=mid-1;
            }
            else if (target==nums[mid]){
                return mid;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
};
