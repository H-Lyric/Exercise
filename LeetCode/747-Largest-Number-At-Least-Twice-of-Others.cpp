//My submission
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0;
        int max2 = 0;
        int index = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > max2){
                if (nums[i] > max){
                max2 = max;
                max = nums[i];
                index = i;
                }
                else max2 = nums[i];
            }
        }
        if (max >= (max2 * 2))
            return index;
        else return -1;
    }
};

//Sample submission
/*
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto maxi = max_element(nums.begin(),nums.end());
        for(int i:nums)
            if(*maxi < 2*i && *maxi!=i)
                return -1;
        return maxi - nums.begin();
    }
};
*/
