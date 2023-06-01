#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void merge(vector<int> &arr, int L, int m, int R)
{
    int temp[R-L+1];
    int i = L, j = m+1, k = 0;

    while(i<=m and j<=R)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i<=m)
        temp[k++] = arr[i++];
    
    while(j<=R)
        temp[k++] = arr[j++];
    
    k=0;

    while(L+k<=R)
    {
        arr[L+k] = temp[k];
        k++;
    }
}

void mergeSort(vector<int> &arr, int L, int R)
{
    if(L>=R)
        return;

    int m = L + (R-L)/2;

    mergeSort(arr, L, m);
    mergeSort(arr, m+1, R);

    merge(arr, L, m, R);
}

int main()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements : ";

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    auto start = high_resolution_clock::now();

    mergeSort(arr, 0, n-1);

    auto end = high_resolution_clock::now();

    cout<<"After sorting elements are : ";

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";    

    auto duration = duration_cast<microseconds>(end - start);

    cout<<"\n Total Time taken : "<<duration.count()<<"microseconds\n";

    return 0;
}