// Q5.Draw a simple memory diagram (on paper or using any drawing tool) showing how a pointer references the address of a variable, using the variables from your likes and ptrLikes example; label the variable, pointer, and address.
/*
MEMORY LAYOUT (Conceptual)
      ---------------------------
      |      ...            |
Address: 0x1000   +-----------------+
      |      |      10 (Value) | <--- Variable: likes
      |      |                 |
      |      ----------------- |
      |      |      ...        |
      |      |                 |
Address: 0x2000   +-----------------+
      |      |   0x1000 (Value)| <--- Pointer: ptrLikes
      |      | (Address of likes)|
      |      +--------|--------+
      |               |
      |      ...      |
      ----------------|----------
                      |
                      | (References)
                      V
*/
/*Explanation of the Diagram:
Memory Cells: The rectangles represent specific locations in computer memory.

Variable: likes

It is located at memory address 0x1000 (hypothetical).

It stores the integer value 10.

Pointer: ptrLikes

It is a separate variable located at a different memory address, 0x2000 (hypothetical).

The "value" stored inside ptrLikes is not an integer like 10, but rather the address of the variable it points to: 0x1000.

The Arrow (Reference): The arrow demonstrates that by knowing the value inside ptrLikes (0x1000), the program can "point" to or reference the location of the likes variable.
*/