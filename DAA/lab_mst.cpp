#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void generate_random(int a[], int n)
{
    int i;
    srand(time(0));

    for(i=0; i<n; i++)
        a[i] = rand()%1000;
}

void quickSort(int arr[], int low, int high)
{
    int i = low, j = high;
    int pivot = (low+high)/2;

    while(i <= j)
    {
        while(arr[i] < arr[pivot])
            i++;
        
        while(arr[j] > arr[pivot])
            j--;

        if(i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(low < j)
        quickSort(arr, low, j);
    
    if(i < high)
        quickSort(arr, i, high);
}

int main()
{
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];

    generate_random(arr, n);

    auto start = high_resolution_clock::now();

    quickSort(arr, 0, n-1);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout<<"Time taken to sort the array : "<<duration.count()<<endl;
    
    return 0;
}  
