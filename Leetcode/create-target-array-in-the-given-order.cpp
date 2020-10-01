class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> out;
        for(int i=0;i<index.size();i++){
            out.insert(out.begin()+index[i],nums[i]);
        }
        return out;
    }
};