#importing libraries
import matplotlib.pyplot as plt

data_dict = {'CSE':30, 'CIVIL':28, 'EEE':32}

#retrieving data from the dictonary
x = list(data_dict.keys())
y = list(data_dict.values())

plt.bar(x,y)

plt.show()