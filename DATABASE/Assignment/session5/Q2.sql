//Write an SQL query using INNER JOIN to display each post's caption along with the name of the influencer who posted it, based on the tables you created.

SELECT posts.caption, influencers.name
FROM posts
INNER JOIN influencers
ON posts.influencer_id = influencers.influencer_id;
