-- Write your PostgreSQL query statement below
SELECT uno AS id, COUNT(*) AS num
FROM (
    SELECT requester_id AS uno, accepter_id AS dos
    FROM RequestAccepted
    UNION
    SELECT accepter_id AS uno, requester_id AS dos
    FROM RequestAccepted
)
GROUP BY uno
ORDER BY num DESC
LIMIT 1

