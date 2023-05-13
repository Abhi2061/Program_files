def prime(n):
    cnt = 0

    for i in range(1,n+1):
        if(n%i == 0):
            cnt += 1

    if(cnt == 2):
        return True
    else:
        return False

N = int(input("Enter the number : "))

if(prime(N)):
    print("This is a prime number")
else:
    print("This is not a prime number")
