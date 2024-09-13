class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // we only need to handle the cases for digit 9 everyone else will automatically be solved
        //case 1 =  9
        for(int i = digits.size()-1;i>=0;--i){
            if(digits[i]==9){
                digits[i]=0;
            }
            //case 2 = 123
            else{
                digits[i] += 1;
                return digits;
            }
        }
        //case 3 = 999
        // if we reach this point where each digit will become zero so we will add one more zero from our side  at the back and then we will turn 0th index zero to  1 becz 999+1  = 0 0 0 0 , then 1000
        digits.push_back(0);
        digits[0]=1;
return digits;

    }
};
