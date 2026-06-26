-- Write your PostgreSQL query statement below
SELECT A.id
FROM Weather AS A
INNER JOIN Weather AS B ON (A.recordDate - B.recordDate) = 1
WHERE A.temperature > B.temperature;