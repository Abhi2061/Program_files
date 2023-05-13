import numpy as np

arr1 = np.array([10, 54, 2, 64, 23, 572, 75, 36])

n = len(arr1)

print("Before Swapping : ")
print(arr1)

for i in range(n):
    for j in range(n-i-1):
        if(arr1[j] > arr1[j+1]):
            temp = arr1[j]
            arr1[j] = arr1[j+1]
            arr1[j+1] = temp

print("After Swapping : ")
print(arr1)