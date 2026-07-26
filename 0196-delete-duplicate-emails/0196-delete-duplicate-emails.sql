-- Write your PostgreSQL query statement below

WITH norepetidos AS (
    SELECT MIN(id) AS id, email 
    FROM Person
    GROUP BY email
)

DELETE
FROM person
WHERE id NOT IN (SELECT id FROM norepetidos) 

