import numpy as np

def Trans(x):
    n = len(x)

    for i in range(0, n):
        for j in range(0, i):
            temp = x[i,j]
            x[i,j] = x[j,i]
            x[j,i] = temp
    
    return x

arr1 = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])

print(Trans(arr1))