#Build a function update_cart(cart, item, qty) that adds a new item to a Flipkart-style cart dictionary or updates the quantity if the item already exists, then returns the updated cart.<br><br><em><strong>Hint:</strong> Use the dictionary's update() method or direct assignment for adding/updating entries.</em>

def update_cart(cart, item, qty):
    cart[item] = qty
    return cart


cart = {"Mobile": 1, "Headphones": 2}

cart = update_cart(cart, "Laptop", 1)
print(cart)

cart = update_cart(cart, "Mobile", 3)
print(cart)

