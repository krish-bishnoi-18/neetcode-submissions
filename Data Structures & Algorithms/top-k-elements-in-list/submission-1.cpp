class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        // Count the frequency of every number
        for (int num : nums) {
            count[num]++;
        }

        // bucket[f] contains numbers appearing f times
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& [num, frequency] : count) {
            bucket[frequency].push_back(num);
        }

        vector<int> answer;

        // Start with the highest frequency
        for (int frequency = nums.size();
             frequency >= 1 && answer.size() < k;
             frequency--) {

            for (int num : bucket[frequency]) {
                answer.push_back(num);

                if (answer.size() == k) {
                    break;
                }
            }
        }

        return answer;
    }
};