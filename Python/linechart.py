import matplotlib.pyplot as plt
import numpy as np


# Define X and Y variable data
x = np.array([33,34,52,240,2417,24432])
y = np.array([1,10,100,1000,10000,100000])

# x = np.array([1, 2, 3, 4])  # X-axis points
# y = x*x  # Y-axis points

plt.plot(x, y)
plt.xlabel("Time required(microseconds)") # add X-axis label
plt.ylabel("Number of elements") # add Y-axis label
plt.title("Merge Sort Time Complexity") # add title
plt.show()
