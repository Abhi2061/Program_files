import matplotlib.pyplot as plt
fig = plt.figure()

ax = fig.add_axes([0,0,1,1])

ax.set_title('axes title')
ax.set_xlabel('abhishek')
ax.set_ylabel('kumar')
ax.text(3,8, 'boxed italics text indata coords', style='italic', bbox = {'facecolor':'red'})
ax.text(2,6,r'an equation:$E= mc^2$',fontsize = 15)
ax.text(4,0.05,'colored text in axes coords', verticalalignment = 'bottom', color = 'green', fontsize = 15)
ax.plot([2],[1],'o')
ax.annotate('annotate', xy = (2,1), xytext=(3,4), arrowprops = dict(facecolor = 'black', shrink = 0.05))
ax.axis([0,10,0,10])
plt.show()