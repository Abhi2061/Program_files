def factor_sum(n):

    ans = 0

    for i in range(1,int(n/2) + 1):
        if(n%i == 0):
            ans += i

    return ans

L = int(input("Enter the value of L : "))
R = int(input("Enter the value of R : "))

for i in range(L, R+1):
    sum1 = factor_sum(i)
    sum2 = factor_sum(sum1)

    if(i == sum2 and sum1 <= R and sum1 > i):
        print(i,",",sum1)