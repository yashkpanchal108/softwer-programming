#Build a Python script that asks the user for their marks (0-100) and prints their grade based on this rule: 90+ = 'A', 75-89 = 'B', 60-74 = 'C', 40-59 = 'D', below 40 = 'F'. Use if, elif, and else.

# Take marks as input
marks = int(input("Enter your marks (0-100): "))

# Calculate grade
if marks < 0 or marks > 100:
    print("Invalid marks! Please enter marks between 0 and 100.")
elif marks >= 90:
    print("Your grade is A")
elif marks >= 75:
    print("Your grade is B")
elif marks >= 60:
    print("Your grade is C")
elif marks >= 40:
    print("Your grade is D")
else:
    print("Your grade is F")
