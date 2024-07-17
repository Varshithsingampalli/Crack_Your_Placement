class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int c = 0;
        for(auto i : nums) s.insert(i);
        for(auto i : s)
        {
            nums[c] = i;
            c++;
        }
        return c;
    }
};
