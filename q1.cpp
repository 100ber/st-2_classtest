/*  Name : Saurabh Sharma
    Roll No.- 2010992088
    Group -20;
    Set - 5

    Question 1.






    */
#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int s ,int e,vector< vector <int>> &v,int sum){

    vector<int> v2;
    v2.push_back(sum);
    for(int i=s;i<=e;i++){
        v2.push_back(arr[i]);
    }

    v.push_back(v2);
}

int main(){
//quest1

int n,x;
cin>>n>>x;//input value of size of array and target sum value
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<vector <int>> v;
int count=0;
//for loop for i
for(int i=0;i<n;i++){int c=0,sum=arr[i];//initialising the sum variable to current element
if(sum==x){
    cout<<x<<endl;//printing x if size of subarray is 1
    break;
}
    for(int j=i+1;j<n;j++){//for loop for j to calculate sum of subarray
            sum+=arr[j];//adding elements of subarray
        if(sum==x){
             c=j-i+1;
            display(arr,i,j,v,c);//calling display function to print subarray with sum 0;

        }
    }
    if(c>count){
        count=c;
    }
}


//printing maximum length subarray
for(int i=0;i<v.size();i++){
        if(v[i][0]==count){
    for(int j=1;j<v[i].size();j++){

        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    break;
    }
}





return 0;
}
