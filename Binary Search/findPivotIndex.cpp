/*
find pivot index.
*/

#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int num[5] = {3,7,8,9,1};

    cout << "The Pivot index is " << getPivot(num,5);
    return 0;
}
