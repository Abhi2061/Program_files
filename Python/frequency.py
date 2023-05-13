import numpy as npn

lst = [32, 85, 33, 43, 32, 43, 43, 65, 85, 43, 85]

dict = {}

for i in lst:
    if(dict.get(i) == None):
        dict[i] = 1
    else:
        dict[i] += 1    

print("Frequency table : \n")

for i in dict:
    print(i , " - " , dict[i])