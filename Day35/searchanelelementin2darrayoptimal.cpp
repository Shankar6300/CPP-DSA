#include<bits/stdc++.h>
using namespace std;
bool searchmatrix(vector<vector<int>>& matrix, int target){
int n = matrix.size();
int m = matrix[0].size();
int low=0,high=n*m-1;
while(low<=high){
    int mid=(low+high)/2;
    int row=mid/m; 
    int col=mid%m;
    if(matrix[row][col]==target) return true;
    else if(target>matrix[row][col]) low=mid+1;
    else high=mid-1;
}
return false;

}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=4;
    searchmatrix(matrix,target) == true ? cout<<"true\n" : cout<<"false\n";

}