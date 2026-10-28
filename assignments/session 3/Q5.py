#Create a basic calculator program that takes two numbers and an operator (+, -, *, /) as input, performs the correct operation using typecasting, and prints the result. If the user enters an invalid operator, print an error message.


# Take two numbers and an operator as input
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
operator = input("Enter an operator (+, -, *, /): ")

# Perform the correct operation
if operator == "+":
    result = num1 + num2
    print("Result:", result)

elif operator == "-":
    result = num1 - num2
    print("Result:", result)

elif operator == "*":
    result = num1 * num2
    print("Result:", result)

elif operator == "/":
    if num2 != 0:
        result = num1 / num2
        print("Result:", result)
    else:
        print("Error: Cannot divide by zero!")

else:
    print("Error: Invalid operator!")
