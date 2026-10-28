#Build a function reverse_message(message) that reverses any string passed to it, similar to how WhatsApp displays reversed text stickers.<br><br><em><strong>Constraint:</strong> Do not use Python's built-in reversed() or [::-1] slicing shortcut.</em>


def reverse_message(message):
    reversed_text = ""
    
    for char in message:
        reversed_text = char + reversed_text
    
    return reversed_text

text = input("Enter a message: ")
print("Reversed message:", reverse_message(text))
