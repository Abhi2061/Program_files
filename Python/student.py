class student:
    def __init__(self, Roll, Name, Class):
        self.Roll = Roll
        self.Name = Name
        self.Class = Class

    def display(self):
        print("Roll : ", self.Roll)
        print("Name : ", self.Name)
        print("Class : ", self.Class)
        
Roll = input("Enter the Roll No : ")
Name = input("Enter the Name : ")
Class = input("Enter the Class : ")

std = student(Roll, Name, Class)
print("\n Entered Details are :-\n")
std.display()