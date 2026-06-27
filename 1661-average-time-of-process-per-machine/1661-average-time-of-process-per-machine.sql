-- Write your PostgreSQL query statement below
SELECT 
    Inicio.machine_id,
    ROUND(
        AVG(Fin.timestamp - Inicio.timestamp)::numeric, 3
    ) AS processing_time
FROM Activity AS Inicio
INNER JOIN Activity AS Fin 
    ON Inicio.machine_id = Fin.machine_id 
    AND Inicio.process_id = Fin.process_id
WHERE Inicio.activity_type = 'start' 
  AND Fin.activity_type = 'end'
GROUP BY Inicio.machine_id;