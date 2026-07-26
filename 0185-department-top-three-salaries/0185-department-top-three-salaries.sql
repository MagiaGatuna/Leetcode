WITH TABLA_GROUPBY AS (
    SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
    FROM Employee AS E
    JOIN Department AS D ON E.departmentId = D.id
),
TABLA_RANKING AS (
    SELECT Department, Employee, Salary,
        DENSE_RANK() OVER (PARTITION BY Department ORDER BY Salary DESC) AS rnk
    FROM TABLA_GROUPBY 
)
SELECT Department, Employee, Salary
FROM TABLA_RANKING
WHERE rnk <= 3;
