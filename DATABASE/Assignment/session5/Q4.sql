//Write an SQL query using RIGHT JOIN to list all posts and the corresponding influencer's name, ensuring that even posts without a matching influencer_id (if any) are shown.

SELECT 
    posts.caption,
    influencers.name
FROM influencers
RIGHT JOIN posts
ON influencers.influencer_id = posts.influencer_id;
