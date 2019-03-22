//My solution, runtime 2036ms, memory 14.1MB
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int LeftSum;
        int RightSum;
        int i, j, flag = 0;
        int pivot= -1;
        for (i = 0; i < nums.size(); i++){
            LeftSum = 0;
            RightSum = 0;
            for (j = 0; j < i; j++){
                LeftSum += nums[j];
            }
            for (j = (i+1); j < nums.size(); j++){
                RightSum += nums[j];
            }
            if (LeftSum == RightSum && flag == 0){
                pivot = i;
                flag = 1;
            }                    
        }
        return pivot; 
    }
};

//Sample submisson, runtime 32ms，memory 14.2MB
/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int Sum = 0;
        int LeftSum = 0;
        
        for (int i = 0; i < nums.size(); i++)  Sum += nums[i];
        //简单写法：for (int num : nums) Sum += num;
        
        for (int j = 0; j < nums.size(); j++){
            if (LeftSum == Sum - LeftSum - nums[j]) return j;
            LeftSum += nums[j];
        }            
        return -1; 
    }
};
*/
