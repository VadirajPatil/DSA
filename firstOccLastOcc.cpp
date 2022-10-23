// to find the first and last position of a number
// coding ninjas q. 260


#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + ((end - start) / 2);

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    return ans;
}


int lastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + ((end - start) / 2);

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main(){
    int num[9] = {1,2,3,3,3,3,3,3,5};

    int first = firstOcc(num, 9, 3);
    int last = lastOcc(num, 9, 3);
    cout << "The first occurence of 3 is at index " << first << endl;
    cout << "The last occurence of 3 is at index " << last << endl;
    cout << "The total number of occurences of number 3 is " << (last - first + 1) 
         << endl;
    return 0;
}