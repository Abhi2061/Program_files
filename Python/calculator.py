def sum(num1, num2):
    return num1+num2

def difference(num1, num2):
    return num1-num2

def product(num1, num2):
    return num1*num2

def division(num1, num2):
    return num1/num2

def modulus(num1, num2):
    return num1%num2


n1 = int(input("Enter the First number : "))
n2 = int(input("Enter the Second number : "))

print()

print("Sum : ", sum(n1, n2))
print("Difference : ", difference(n1, n2))
print("Product : ", product(n1, n2))
print("Division : ", division(n1, n2))
print("Modulus : ", modulus(n1, n2))