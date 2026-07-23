-- Write your PostgreSQL query statement below
SELECT E2.reports_to AS employee_id, E1.name, count(*) AS reports_count, ROUND(AVG(E2.age)) AS average_age
FROM Employees AS E1
JOIN Employees AS E2 ON E1.employee_id = E2.reports_to
GROUP BY E2.reports_to, E1.name
ORDER BY E2.reports_to