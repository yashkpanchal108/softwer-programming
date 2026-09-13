//Write an SQL query using LEFT JOIN to show all influencers and their posts, including influencers who haven't posted anything yet. If an influencer has no posts, display 'No Posts' in the caption column.<br><br><em><strong>Hint:</strong> Use IFNULL or COALESCE to handle NULL values in the result.</em>

SELECT 
    influencers.name,
    COALESCE(posts.caption, 'No Posts') AS caption
FROM influencers
LEFT JOIN posts
ON influencers.influencer_id = posts.influencer_id;

