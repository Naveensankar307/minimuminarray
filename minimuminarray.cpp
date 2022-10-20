#include<iostream>
void readarray(int x[100],int n);
void displayarray(int x[100],int n);
int minimum(int x[100],int n);
using namespace std;

main(){
    int a[100],n,res;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the array elements : ";
    readarray(a,n);
    displayarray(a,n);
    res = minimum(a,n);
    cout<<"minimum element in array  is : "<<res;
}

void readarray(int x[100],int n){
    int i;
    for (i=0;i<n;i++){
        cin>>x[i];
    }
}

void displayarray(int x[100],int n){
    int i;
    for (i = 0;i<n;i++){
        cout<<x[i]<<"\t";
    }
    cout<<"\n";
}

int minimum(int x[100],int n){
    int i, min = x[0];
    for (i=0;i<n;i++){
        if(x[i]<min){
            min = x[i];
        }
    }
    return min;
}