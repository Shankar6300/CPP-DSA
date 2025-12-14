#include<bits/stdc++.h>
using namespace std;
int calculateTotalhours(vector<int>& a,int hourly){
    int totalHours = 0;
    for(int pile : a){
        totalHours += (pile+hourly-1)/hourly;
    }
    return totalHours;
}
int minEatingspeed(vector<int>& a,int h){
    int maxval = *max_element(a.begin(),a.end());
    for(int i=1;i<=maxval;i++){
        int hours = calculateTotalhours(a,i);
        if(hours<=h){
            return i;
        }


    }
    return maxval;
}
int main(){
    vector<int> a = {3, 6, 7, 11};
    
    int h = 8;

    
    cout << minEatingspeed(a, h);
    return 0;
}