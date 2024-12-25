/*In this program we build a logic to find the maximum integer in an array*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int target_max=0;
    int pos;
    cout<<"How many elements you want to store in this array? : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array below !"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>target_max){
            target_max=arr[i];
            pos=i;
        }
    }
    cout<<"The largest element in this array is "<<target_max<<endl;
    cout<<"It is the "<<pos+1<<" element of this array !"<<endl;
    return 0;
}
