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

void merge(int a[], int s, int e)
{
    int mid = (s+e)/2;

    int i = s, j = mid+1, k = 0;
    int temp[e-s+1];

    while(i <= mid and j <= e)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= e)
        temp[k++] = a[j++];

    for(i=s; i<=e; i++)
        a[i] = temp[i-s];
}

void mergeSort(int a[], int s, int e)
{
    if(s < e)
    {
        int mid = (s+e)/2;

        mergeSort(a, s, mid);
        mergeSort(a, mid+1, e);

        merge(a, s, e);
    }
}

int main() {

    int n = 20;
    int arr[n];

    // generate n random numbers and fill them in arr
    generate_random(arr, n);

    // cout<<"Original Array : \n";

    // for(int i=0; i<n; i++)
    //     cout<<arr[i]<<" ";

    // cout<<"\n\n";

    // stores the time before sorting
    auto start = high_resolution_clock::now();

    // sorting the elements using quicksort
    mergeSort(arr, 0, n - 1);

    // cout<<"Sorted Array : \n";

    // for(int i=0; i<n; i++)
    //     cout<<arr[i]<<" ";
    
    // cout<<"\n\n";

    // stores the time after sorting
    auto stop = high_resolution_clock::now();

    // calculate the difference between start and stop
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Number of Elements : " << n << endl;
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}