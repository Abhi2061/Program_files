import matplotlib.pyplot as plt
fig = plt.figure()

ax = fig.add_axes([0,0,1,1])

ax.set_title('Personal Detail')
ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')

ax.text(1, 9, 'Abhishek Kumar', verticalalignment = 'bottom', color = 'red', fontsize = 15)
ax.text(1, 9, 'MCA - 7/B', verticalalignment = 'bottom', color = 'green', fontsize = 15)
ax.text(1, 9, '22MCA20709', verticalalignment = 'bottom', color = 'blue', fontsize = 15)

ax.axis([0,10,0,10])
plt.show()