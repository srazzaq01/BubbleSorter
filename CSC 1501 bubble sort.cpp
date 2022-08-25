 
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// create a function to swap numbers (using pointers)
void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
// sort function that will be swapping two numbers if one of them is less than other
int sort(int arr[], int n)
{
// declare variables
    int i;
    int j;
    int action = 0;
    for (i = 0; i < n-1; i++)
      
// innner for loop
        for (j = 0; j < n-i-1; j++){
            // swaps the numbers
            if (arr[j] > arr[j+1]){
            swap(&arr[j], &arr[j+1]);
                
                
                
            // add to the actions if numbers were swapped
                action +=3;
            }
            // +1 action for comparison
                action +=1;
            }
    // returning the actions
    return action;
}
// simple function to display the array
void displayArr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// main function
int main()
{
    // declare a variable for the actions and the array
    int actions = 0;
    int arr[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
    // determining the size
    int n = sizeof(arr)/sizeof(arr[0]);
    actions = sort(arr, n);
    // print sorted array
    cout<<"Array after bubble sort: " << endl;
    displayArr(arr, n);
    // print actions done
    cout << "Number of actions performed: " << actions;
    cout << endl;
    return 0;
}
