#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>& nums){
    int largest = INT_MIN , secondlargest = INT_MIN;
    for(int num : nums){
        if(num>largest){
            secondlargest=largest;
            largest=num;
        }
        else if(num>secondlargest && num<largest){
            secondlargest=num;
        }
    }
    return (secondlargest==INT_MIN) ? -1 : secondlargest;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<secondlargest(nums);
    
}