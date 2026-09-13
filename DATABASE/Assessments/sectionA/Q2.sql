//Explain why the WHERE clause is essential in each DML statement. What could go
//wrong with an UPDATE or DELETE executed without a proper WHERE condition?


The WHERE clause is essential in DML statements such as UPDATE and DELETE because it specifies which records should be affected.

1. UPDATE:
The WHERE clause ensures that only the intended rows are updated.
For example:

UPDATE Restaurants
SET rating = 4.7
WHERE name = 'Spice Villa';

Without WHERE, the rating of every restaurant in the table would become 4.7.

2. DELETE:
The WHERE clause ensures that only the required records are deleted.
For example:

DELETE FROM Restaurants
WHERE rating < 3.5;

Without WHERE, all restaurants from the table would be permanently deleted.

Conclusion:
A missing or incorrect WHERE condition can cause unintended data modification or permanent data loss. Therefore, the WHERE clause should always be checked carefully before executing UPDATE or DELETE.