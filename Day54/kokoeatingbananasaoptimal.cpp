#include<bits/stdc++.h>
using namespace std;
int calculateTotalhours(vector<int>& a,int speed){
    int totalh=0;
    for(int bananas : a){
        totalh += ceil((double)bananas/speed);
    }
    return totalh;
}
int minEatingspeed(vector<int>& a,int h){
    int maxpile = *max_element(a.begin(),a.end());
    int ans = maxpile;
    int low = 1;
    int high = maxpile;
    while(low<=high){
        int mid = (low+high)/2;
        int totalh = calculateTotalhours(a,mid);
        if(totalh<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
}
int main(){
    vector<int> a = {3, 6, 7, 11};
    
    int h = 8;

    
    cout << minEatingspeed(a, h);
    return 0;
}