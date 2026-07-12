-- Write your PostgreSQL query statement below
SELECT P.project_id, ROUND(AVG(E.experience_years), 2) AS average_years
FROM Project AS P
INNER JOIN Employee AS E ON E.employee_id = P.employee_id
GROUP BY P.project_id