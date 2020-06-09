class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int current = -1;
        map<int,int> store;
        for(int i = 0; i < sorted.size();i++){
            if(current != sorted[i]){
               store[sorted[i]] = i;
            }
            current = sorted[i];
        }
        
        vector<int> result;
        for(int i=0; i < nums.size(); i++){
           result.push_back(store[nums[i]]);
        }
        return result;
    }
};
