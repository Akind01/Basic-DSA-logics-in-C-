/*In this program we build a logic to find the maximum integer in an array*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int pos;
    cout<<"How many elements you want to store in this array? : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array below !"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target_min=arr[0];/*It is better approach(logical) to solve this array problem instead of 'INT_MIN'(language based keyword)*/
    for(int i=0; i<n; i++){
        if(arr[i]<target_min){
            target_min=arr[i];
            pos=i;
        }
    }
    cout<<"The smallest element in this array is "<<target_min<<endl;
    cout<<"It is the "<<pos+1<<" element of this array !"<<endl;
    return 0;
}
