-- Write your PostgreSQL query statement below
SELECT P.product_id, 
        COALESCE(ROUND(SUM(u.units * p.price) * 1.0 / SUM(u.units), 2), 0) AS average_price
FROM Prices AS P
LEFT JOIN UnitsSold AS U
          ON P.product_id = U.product_id
          AND U.purchase_date BETWEEN P.start_date AND P.end_date
GROUP BY p.product_id;