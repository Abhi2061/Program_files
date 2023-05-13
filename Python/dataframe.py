import pandas as pd

# classes = pd.Series(["Mathematics", "Chemistry", "Physics", "History", "Geography", "German"])

# grades = pd.Series([90, 54, 77, 22, 25])

# x = pd.DataFrame({"Classes" : classes, "Grades" : grades})

# print(x)

data = {
        'Name' :['Jai', 'Prince', 'Gaurav', 'Anuj'],
        'Age' : [27, 24, 22, 32],
        'Address' : ['Delhi', 'Kanpur', 'Allahabad', 'Kannauj'],
        'Qualification' : ['Msc', 'MA', 'MCA', 'Phd']
    }

df = pd.DataFrame(data)

# print(df[['Name', 'Qualification']])

# print(df.loc[(df['Name'] == 'Prince' and df['Age'] == 24)])

print("\n\n")

print(df.iloc[0:5, 0:5])