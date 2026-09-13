//Which database mechanism should have prevented this inconsistency? Explain how COMMIT, ROLLBACK, and SAVEPOINT work together to ensure both operations succeed or neither takes effect.

The **Transaction Control mechanism** should have prevented this inconsistency. It uses **COMMIT, ROLLBACK, and SAVEPOINT** to maintain data consistency and ensure that transactions are completed safely.

* **COMMIT:** Permanently saves all changes made during the transaction.
* **ROLLBACK:** Cancels the changes made in the current transaction and restores the previous state.
* **SAVEPOINT:** Creates a temporary point within a transaction to which we can roll back without cancelling the entire transaction.

For example, if a transaction contains two operations, both operations should succeed before using `COMMIT`. If one operation fails, `ROLLBACK` can undo the changes so that neither operation takes effect.

```sql id="g2k9mp"
START TRANSACTION;

-- Operation 1
-- Operation 2

COMMIT;
```

If an error occurs:

```sql id="m8v4qx"
ROLLBACK;
```

A `SAVEPOINT` can also be used when we want to undo only part of a transaction:

```sql id="p5x7ka"
SAVEPOINT point1;

-- Another operation

ROLLBACK TO SAVEPOINT point1;
```

**Conclusion:**
These transaction controls help maintain **data consistency and integrity** by ensuring that related operations are either completed successfully or safely undone.