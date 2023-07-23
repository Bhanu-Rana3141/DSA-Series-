#include<iostream>
using namespace std;

void square(int arr[],int n){
    for(int i=0; i<n; i++){
        arr[i]=arr[i]*arr[i];
    }
}

void sort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter array ele: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    square(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;   
}