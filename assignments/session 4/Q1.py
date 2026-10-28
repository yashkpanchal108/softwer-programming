#Write a Python program that takes your age as input and prints whether you are eligible to create an account on Instagram (must be 13 or older). Use if and else statements.


# Take age as input
age = int(input("Enter your age: "))

# Check Instagram account eligibility
if age >= 13:
    print("You are eligible to create an Instagram account.")
else:
    print("You are not eligible to create an Instagram account.")
