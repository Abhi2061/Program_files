def factorial(n):
    ans = 1

    for i in range(2,n+1):
        ans *= i
    
    return ans

N = int(input("Enter the value of N : "))
R = int(input("Enter the value of R : "))

pnr = factorial(N)/factorial(N-R)
cnr = pnr/factorial(R)

print("P(N,R) : ", int(pnr))
print("C(N,R) : ", int(cnr))