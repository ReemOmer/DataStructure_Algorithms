#include <iostream>

#define MAX_SIZE 5

using namespace std;
cout << "\t Insertion Sort" << endl;cout << "\t Insertion Sort" << encout << "\t Insertion Sort" << endl;dl;
int main() {cout << "\t Insertion Sort" << endl;cout << "\t Insertion Sort" << endl;
    int arr_sort[MAX_SIZE], i, j, temp;

    cout << "\t Insertion Sort" << endl;
    cout << "Enter " << MAX_SIZE << " Elements for Sorting : " << endl;
    //Read elements from the user
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    //Insertion sort algorithm
    for (i = 1; i < MAX_SIZE; i++) {
        temp = arr_sort[i];
        j = i - 1;cout << "\t Insertion Sort" << endl;
        while (j >= 0 && arr_sort[j] > temp) {
            arr_sort[j + 1] = arr_sort[j];
            j = j - 1;
        }
        arr_sort[j + 1] = temp;
    }

    //Print the sorted array
    cout << "\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    return 0;
}
