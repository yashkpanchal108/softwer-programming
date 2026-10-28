#Given a list of song durations in minutes, use a lambda function with the map() function to convert all durations to seconds and print the resulting list.

durations = [3, 4, 5, 2.5, 6]

seconds = list(map(lambda x: x * 60, durations))

print(seconds)
