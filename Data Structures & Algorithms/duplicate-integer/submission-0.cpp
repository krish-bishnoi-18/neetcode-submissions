class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for(auto it: nums){
            st.insert(it);
        }
        bool answer=false;
        if(st.size()<nums.size()){
            return true;
        }
        return answer;
    }
};