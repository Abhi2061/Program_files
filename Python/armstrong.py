def isArmstrong(num):
    temp = num
    sum = 0

    while(temp > 0):
        digit = temp%10
        temp = temp // 10
        sum = sum + (digit ** 3)

    if(num == sum):
        return True

    return False

L = int(input("Enter the starting value of range : "))
R = int(input("Enter the ending value of range : "))

Min = R+1
Max = L-1

for i in range(L, R+1):
    if(isArmstrong(i)):
        Min = min(Min, i)
        Max = max(Max, i)

if(Min > R):
    print("\nThere is no Armstrong number in the given range")

else:
    print("\nIn the given range, \nSmallest Armstrong Number : ", Min)
    print("Largest Armstrong Number : ", Max)