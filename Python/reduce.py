from functools import reduce

def product(x,y):
    return x*y

ans = reduce(product, [2,5,3,7])
print(ans)