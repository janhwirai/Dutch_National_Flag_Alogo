//Dutch National Flag Algorithm
//Sorting algorithm that partitions an array containing elements of three distinct values
//into three parts
//It uses three pointers to partition the array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//Dutch Nationnal Flag Algorithm
    void sortColors(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
         while(mid<=end){
           if(nums[mid]==0){
               swap(nums[start++],nums[mid++]);
           }
           else if(nums[mid]==1){
               mid++;
           }
           else{
               swap(nums[end--],nums[mid]);
           }
       }
    }
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int v;
        vector<int>a;
        for (int i = 0; i < n; i++) {
            cin>>v;
            a.push_back(v);
    }

        Solution ob;
        ob.sortColors(a);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}