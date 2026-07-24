-- Write your PostgreSQL query statement below
SELECT *,
    CASE
    WHEN X > Y AND Y >= Z THEN
        CASE 
        WHEN Y + Z > X THEN 'Yes'
        ELSE 'No'
        END
    WHEN X > Z AND Z >= Y THEN
        CASE 
        WHEN Y + Z > X THEN 'Yes'
        ELSE 'No'
        END
    WHEN Y > X AND X >= Z THEN
        CASE 
        WHEN X + Z > Y THEN 'Yes'
        ELSE 'No'
        END
    WHEN Y > Z AND Z >= X THEN
        CASE 
        WHEN X + Z > Y THEN 'Yes'
        ELSE 'No'
        END
    WHEN Z > Y AND Y >= X THEN
        CASE 
        WHEN Y + X > Z THEN 'Yes'
        ELSE 'No'
        END
    WHEN Z > X AND X >= Y THEN
        CASE 
        WHEN X + Y > Z THEN 'Yes'
        ELSE 'No'
        END
    ELSE 'Yes'
    END
    AS triangle
FROM Triangle