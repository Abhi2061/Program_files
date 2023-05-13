import matplotlib.pyplot as plt

data_dict = {'CSE':30, 'CIVIL':28, 'EEE':32}

x = list(data_dict.keys())
y = list(data_dict.values())

plt.pie(y, labels = x, autopct = '%0.2f%%', shadow='True')

plt.show()