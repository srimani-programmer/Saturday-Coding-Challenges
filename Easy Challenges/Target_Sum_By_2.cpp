#include<iostream>

using namespace std;

int main(){
    int size,key;
    int *arr;
    cin>>size;
    arr = new int[size]; 
    int res[2]; // Array to store the result.

    for(int i=0;i<size;i++)
        cin>>arr[i]; // To Store the Input array Elements.
    
    cin>>key;
    int count = 0;

    for(int i=0;i<size-1;i++){  
        // To traverse the array totally except the last element
        for(int j=i+1;j<size;j++){
            if(arr[i] + arr[j] == key){
                count++;
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            }
        }
        
    }

    if(count == 0)
        cout<<"No elements are Matched: [  ]"<<endl;

    return 0;
}