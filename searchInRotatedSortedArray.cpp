#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

int pivotElement(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;;
        }
        else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }
    return mid;
}

int searchElement(int arr[], int size, int target){

    int pivot = pivotElement(arr, size);

    if(target == arr[pivot]){
        return 1;
    }

    if((target <= arr[size - 1]) && (arr[pivot] <= target)){
        int start = pivot;
        int end = size - 1;

        int midRight = start + (end - start)/2;

        while(start <= end){
            if(arr[midRight] == target){
                return 1; 
            }
            else{
                start = midRight + 1;
            }
            midRight = start + (end - start)/2;
        }
    }
    else{
        int s = 0;
        int e = pivot - 1;

        int midLeft = s + (e - s)/2;

        while(s <= e){
            if(arr[midLeft] == target){
                return 1;
            }
            else if(arr[midLeft] < target){
                s = midLeft + 1;
            }
            midLeft = s + (e - s)/2;
        }
    }

    return 0;
}



int main(){
    int nums[5] = {7, 8, 1, 3, 5};

    cout << "Which number are you finding ?" << endl;
    int key;
    cin >> key;

    if(searchElement(nums, 5, key)){
        cout << key << " is present in the array" << endl;
    }
    else{
        cout << key << " is not present in the array" << endl;
    }
    return 0;
}