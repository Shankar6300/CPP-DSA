#include<bits/stdc++.h>
using namespace std;
vector<int> findmissingrepeating(vector<int>& nums){
    int n = nums.size();
    int repeating = -1,missing=-1;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i) cnt++;
        }
        if(cnt==2){
            repeating = i;
        }
        else if(cnt==0){
            missing = i;
        }
        if(repeating!=-1&&missing!=-1)
        break;
        

    }
    return {repeating,missing};
}
int main(){
    vector<int> arr = {3,1,2,4,5,6,7,5};
    vector<int> result = findmissingrepeating(arr);
    cout<<"The missing and repeating numbers : "<<"["<<result[0]<<","<<result[1]<<"]";


}