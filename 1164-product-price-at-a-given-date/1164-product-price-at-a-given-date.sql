-- Write your PostgreSQL query statement below
WITH P2 AS (
    SELECT product_id, MAX(change_date) AS date
    FROM Products
    WHERE change_date <= '2019-08-16'
    GROUP BY product_id
    )


SELECT P2.product_id, P1.new_price AS price
FROM Products AS P1
JOIN P2 
    ON P1.product_id = P2.product_id AND P1.change_date = P2.date
UNION
SELECT product_id, 10 AS price
FROM Products
WHERE product_id NOT IN (SELECT product_id FROM P2)
ORDER BY product_id