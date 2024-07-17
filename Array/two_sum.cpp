class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1=0,p2=nums.size()-1;
        vector<int> v;
        map <int , vector<int>> mp;
        for(int i =0 ; i<nums.size() ; i++) mp[nums[i]].push_back(i);
        sort(nums.begin() , nums.end());
        while(p1<p2)
        {
            int s = nums[p1]+nums[p2];
            if(s==target) break;
            else if(s<target) p1++;
            else p2--;
        }
        v.push_back(mp[nums[p1]][0]);
        if(nums[p1]==nums[p2]) v.push_back(mp[nums[p1]][1]);
        else v.push_back(mp[nums[p2]][0]);
        return v;
    }
};
