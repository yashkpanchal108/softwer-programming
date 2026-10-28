#Define a function called get_discounted_price that takes price and discount_percent as arguments and returns the final price after applying the discount. Test it with a price of 500 and a discount of 10%.

def get_discounted_price(price, discount_percent):
    discount = price * discount_percent / 100
    final_price = price - discount
    return final_price

# Test the function
print(get_discounted_price(500, 10))
