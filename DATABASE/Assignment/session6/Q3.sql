//Suppose you have a 'payments' table with columns user_id, amount, and payment_date. Write a subquery to find user_ids who have made a single payment above ₹2000 in any transaction.

SELECT user_id
FROM payments
WHERE user_id IN (
    SELECT user_id
    FROM payments
    WHERE amount > 2000
);

