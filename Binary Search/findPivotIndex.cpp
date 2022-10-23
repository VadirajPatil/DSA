/*
find pivot index.
Ex: arr[5] = {8,9,1,3,7}
There are two monotonically increasing functions - line containing 8 and 9 & another 1, 3, 7. At number "1" is the point where the line is getting pivoted. So "1" is 
the pivot index of the array.
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
