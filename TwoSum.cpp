#include<iostream>
#include<array>
#include<vector>

using namespace std;


vector<int> twoSum(vector<int>& arr, int target){

       vector<int> returnVec;
       for(auto i = 0; i < arr.size(); ++i){

        for(auto j = 1; j < arr.size(); ++j){

            int sum = arr[i]+arr[j];
            if((sum == target)){
                
                if((i != j)){
                returnVec.push_back(i);
                returnVec.push_back(j);
                return returnVec;
                }
            }
       }
       
   }
return returnVec;
}

int main(){

vector<int> myArr= {2,5,5,11};
int tar = 10;

vector<int> vec = twoSum(myArr, tar);

for(int i = 0; i < vec.size(); ++i){

    cout << vec[i] << " ";

}
   
}
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]

*/