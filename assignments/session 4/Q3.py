#Create a Python program that checks if a person can order food from Zomato late at night: input age and current time (24-hour format). If age is 18 or above and time is between 22 (10pm) and 2 (2am), print 'Order allowed', else print 'Order not allowed'. Use nested if statements.<br><br><em><strong>Hint:</strong> Handle the time range that crosses midnight by checking if time >= 22 or time <= 2.</em>

# Take age and current time as input
age = int(input("Enter your age: "))
time = int(input("Enter the current time (0-23): "))

# Check eligibility using nested if statements
if age >= 18:
    if time >= 22 or time <= 2:
        print("Order allowed")
    else:
        print("Order not allowed")
else:
    print("Order not allowed")
