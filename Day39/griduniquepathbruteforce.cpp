#include<bits/stdc++.h>
using namespace std;
int countpaths(int i,int j, int m, int n){
if(i==(n-1)&&j==(m-1)) return 1;
if(i>n||j>=m) return 0;
else return countpaths(i+1,j,n,m)+countpaths(i,j+1,n,m);

}
int uniquepaths(int m, int n){
    return countpaths(0,0,m,n);
}
int main(){
    int result=uniquepaths(2,2);
    cout<<"The total number of paths: "<<result<<endl;
}