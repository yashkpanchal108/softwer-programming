#Write a Python program that takes your favorite cricket team's score as input and prints a message: if score is 200 or more, print 'High Score!', if between 150 and 199, print 'Good Score', if between 100 and 149, print 'Average', else print 'Needs Improvement'. Use if, elif, else.

# Take cricket team's score as input
score = int(input("Enter your favorite cricket team's score: "))

# Check the score and print the message
if score >= 200:
    print("High Score!")
elif score >= 150:
    print("Good Score")
elif score >= 100:
    print("Average")
else:
    print("Needs Improvement")
