/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
*/

// Moore's majority vote algorithm
// https://en.wikipedia.org/wiki/Boyer–Moore_majority_vote_algorithm
// Assumption: the array is non-empty and the majority element always exist in the array
// occurs n/2
int majorityElement(vector<int>& nums) {
    int candidate = nums[0], counter = 0;
    for (int n: nums) {
        if (counter == 0) {
            candidate = n;
            counter = 1;
        } else if (candidate == n) {
            counter++;
        } else {
            counter--;
        }
    }
    return candidate;
}

//occurs n/3
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MIN, num2 = INT_MIN;
        int count1 = 0, count2 = 0;
        for(auto element : nums){
            if(num1 == element){
                count1++;
            }
            else if(num2 == element){
                count2++;
            }
            else if(count1 == 0){
                num1 = element;
                count1 = 1;
            }
            else if(count2 == 0){
                num2 = element;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> output;
        int countMajority = nums.size()/3;
        count1 = 0, count2 = 0;
        for(auto element : nums){
            if(num1 == element){
                count1++;
            }
            if(num2 == element){
                count2++;
            }
        }
        if(count1 > countMajority){
            output.push_back(num1);
        }
        if(count2 > countMajority){
            output.push_back(num2);
        }
        return output;
    }
};
