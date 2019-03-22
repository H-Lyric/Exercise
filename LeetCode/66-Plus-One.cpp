//My submission, runtime 4ms
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = 0; i < digits.size(); i++){
            if (carry == 1){
                if (digits[digits.size()-i-1] < 9){
                    digits[digits.size()-i-1] += 1;
                    carry = 0;
                }
                else digits[digits.size()-i-1] = 0;
            }
        }
        if (carry == 1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};

//Sample submission, runtime 4ms
/*
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len = digits.size();
        
        bool allHigh = false;
        for(int i=len-1 ; i >=0 ; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            else
            {
                if(i==0)
                {
                    digits[0] = 1;
                    digits.resize(len+1);
                    digits[len] = 0;
                }
                else
                {
                    digits[i] = 0;
                }   
            }
        }        
        return digits;        
    }
};
*/
