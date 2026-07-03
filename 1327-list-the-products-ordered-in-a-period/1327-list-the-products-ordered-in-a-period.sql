-- Write your PostgreSQL query statement below
SELECT P.product_name, SUM(O.unit) AS unit
FROM Products AS P
JOIN Orders AS O ON O.product_id = P.product_id 
WHERE EXTRACT(YEAR FROM o.order_date) = 2020 
  AND EXTRACT(MONTH FROM o.order_date) = 2
GROUP BY  P.product_name 
HAVING SUM(O.unit) >= 100
ORDER BY SUM(O.unit) DESC