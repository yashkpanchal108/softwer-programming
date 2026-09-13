//Compare INNER JOIN and LEFT JOIN for this query. Which would you use and why?
//Describe what each join type does to records that have no match in the other table.


**INNER JOIN** and **LEFT JOIN** are used to combine data from two tables based on a related column.

**INNER JOIN:**
It returns only the records that have a matching value in both tables. If a record has no match in the other table, it is not included in the result.

**LEFT JOIN:**
It returns all records from the left table, even if there is no matching record in the right table. If there is no match, the columns from the right table contain `NULL` values.

### Example:

```sql
SELECT influencers.name, posts.caption
FROM influencers
INNER JOIN posts
ON influencers.influencer_id = posts.influencer_id;
```

With `INNER JOIN`, influencers who have no posts will not appear.

```sql
SELECT influencers.name, posts.caption
FROM influencers
LEFT JOIN posts
ON influencers.influencer_id = posts.influencer_id;
```

With `LEFT JOIN`, all influencers will appear. If an influencer has no posts, the `caption` will be `NULL`.

### Which would I use?

I would use **LEFT JOIN** if the requirement is to show all influencers, including those who have not posted anything. I would use **INNER JOIN** when I only want influencers who have matching posts.