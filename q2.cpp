/*  Name : Saurabh Sharma
    Roll No.- 2010992088
    Set - 5

    Question 2.






    */

#include<bits/stdc++.h>
using namespace std;


//display function printing subarray with sum equals to 0 by taking array , starting index and ending index of array
void display(int arr[],int s ,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int n;
cin>>n;
int arr[n];//declaring an array of size n
for(int i=0;i<n;i++){
cin>>arr[i];
}
//for loop for i
for(int i=0;i<n;i++){int sum=arr[i];//initialising the sum variable to current element
if(sum==0){
    cout<<0<<endl;//printing 0 if size of subarray is 1
}
    for(int j=i+1;j<n;j++){//for loop for j to calculate sum of subarray
            sum+=arr[j];//adding elements of subarray
        if(sum==0){
            display(arr,i,j);//calling display function to print subarray with sum 0;
        }
    }
}

return 0;
}
