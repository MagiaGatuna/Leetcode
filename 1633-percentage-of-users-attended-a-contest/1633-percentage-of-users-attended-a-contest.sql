-- Write your PostgreSQL query statement below
SELECT R.contest_id,
    ROUND(COUNT(R.user_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Users AS U
INNER JOIN Register AS R ON R.user_id = U.user_id
GROUP BY R.contest_id
ORDER BY percentage DESC, R.contest_id ASC