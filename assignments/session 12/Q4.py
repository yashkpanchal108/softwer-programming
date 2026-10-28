#Use a lambda function with the filter() function to get all product names from a Flipkart-style list that start with the letter 'M'. Example list: ['Mobile', 'Mouse', 'Laptop', 'Monitor', 'Keyboard'].

products = ['Mobile', 'Mouse', 'Laptop', 'Monitor', 'Keyboard']

result = list(filter(lambda x: x.startswith('M'), products))

print(result)
