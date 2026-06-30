-- Write your PostgreSQL query statement below
SELECT  S.user_id, ROUND(
        AVG(CASE WHEN C.action = 'confirmed' THEN 1.0 ELSE 0.0 END), 
        2
        ) AS confirmation_rate
FROM Signups AS S
LEFT JOIN  Confirmations AS C  ON S.user_id = C.user_id
GROUP BY S.user_id
