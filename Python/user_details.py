n = int(input("Enter the number of details to insert : "))
print()

dict = {}

while(n):
    n-=1
    id = int(input("Enter user id : "))
    name = input("Enter name : ")
    age = int(input("Enter age : "))
    dict[id] = [name, age]
    print()

id = int(input("Enter the user id to print the detail : "))
name = dict[id][0]
age = dict[id][1]

print()

print("User Id : ", id)
print("Name : ", name)
print("Age :", age)


