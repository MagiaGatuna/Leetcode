-- Write your PostgreSQL query statement below
SELECT 
    ROUND(COUNT(DISTINCT f.player_id) * 1.0 / (SELECT COUNT(DISTINCT player_id) FROM Activity), 2) AS fraction
FROM (
    SELECT player_id, MIN(event_date) AS first_login
    FROM Activity
    GROUP BY player_id ) 
    AS f
JOIN Activity AS a ON f.player_id = a.player_id AND a.event_date = f.first_login + INTERVAL '1 day';