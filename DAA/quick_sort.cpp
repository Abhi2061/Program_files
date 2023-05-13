#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// function to generate n random numbers
void generate_random(int a[], int n)
{
    int i;
    srand(time(0));

    for(i=0; i<n; i++)
        a[i] = rand()%1000;
}

// quick sort function
void quickSort(int arr[], int low, int high) {
    int i = low, j = high, temp;
    int pivot = arr[(low + high) / 2];

    while (i <= j) {
        // move the i pointer to right till the elements are less than pivot
        while (arr[i] < pivot)
            i++;

        // move the j pointer to left till the elements are greater than pivot
        while (arr[j] > pivot)
            j--;
        
        // swap the elements
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j)
        quickSort(arr, low, j);
    if (i < high)
        quickSort(arr, i, high);
}

int main() {
    int n = 6;
    int arr[];

    // generate n random numbers and fill them in arr
    generate_random(arr, n);

    
    cout<<"Original Array : \n";

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    // stores the time before sorting
    auto start = high_resolution_clock::now();

    // sorting the elements using quicksort
    quickSort(arr, 0, n - 1);

    // stores the time after sorting
    auto stop = high_resolution_clock::now();

    // calculate the difference between start and stop
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Number of Elements : " << n << endl;
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    cout<<"Sorted Array : \n";

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

return 0;
}