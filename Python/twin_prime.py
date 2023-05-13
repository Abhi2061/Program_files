n = int(input("Enter the value of N : "))

prime = [True for i in range(n+1)]

p = 2

while (p * p <= n):

    if (prime[p] == True):

        for i in range(p*p, n+1, p):
            prime[i] = False
            
    p += 1

for i in range(2,n):
    if(prime[i] and prime[i+2]):
        print(i,",",(i+2))