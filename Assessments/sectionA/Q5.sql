//Justify why a VIEW is preferred over direct table access here. What are two limitations
//the front-end developer should be aware of when working with this VIEW?


A **VIEW** is preferred over direct table access because it provides a simplified and controlled way to access data. It can hide the complexity of joins and conditions and can also improve security by exposing only the required columns and records to the front-end developer.

For example, the `TopSpendersView` provides only the `username` and `order_total` for orders above ₹1000, so the front-end developer does not need to access the original `FoodOrder` table directly.

### Two Limitations:

1. **Limited Data:**
   The VIEW only contains the columns and records defined when the VIEW was created. The front-end developer cannot access other table data through this VIEW.

2. **Performance:**
   A complex VIEW containing joins, grouping, or calculations may become slower when working with large amounts of data because the underlying query may need to be executed when the VIEW is accessed.

### Conclusion:

A VIEW provides **security, simplicity, and controlled data access**, but developers should understand that it exposes only predefined data and may have performance limitations for complex queries.