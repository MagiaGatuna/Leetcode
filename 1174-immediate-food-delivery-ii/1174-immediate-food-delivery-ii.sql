-- Write your PostgreSQL query statement below
SELECT 
    ROUND(
        SUM(CASE WHEN order_date = customer_pref_delivery_date THEN 1 ELSE 0 END) * 100.0 / COUNT(*), 
        2
    ) AS immediate_percentage
FROM (
    SELECT customer_id, MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id
) AS first_orders
JOIN Delivery d ON d.customer_id = first_orders.customer_id AND d.order_date = first_orders.first_order_date;