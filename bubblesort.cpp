#include <iostream>
#define MAX_SIZE 5
using namespace std;
int main() {
    int arr_sort[MAX_SIZE], i, j, temp;
    cout << "\t Bubble Sort" << endl;
    cout << "Enter " << MAX_SIZE << " Elements for Sorting : " << endl;
    //Read elements from the user
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    //Bubble sort algorithm
    for (i = 1; i < MAX_SIZE; i++) {
        for (j = 0; j < MAX_SIZE - 1; j++) {
            if(arr_sort[j]>arr_sort[j+1]){
                //Swap the elements
                temp = arr_sort[j];
                arr_sort[j] = arr_sort[j+1];
                arr_sort[j+1] = temp;
            }
        }
    }
    //Print the sorted array
    cout << "\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    return 0;
}




