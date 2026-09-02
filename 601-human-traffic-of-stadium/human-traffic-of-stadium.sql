/* Write your PL/SQL query statement below */
SELECT DISTINCT
    id,
    TO_CHAR(visit_date, 'YYYY-MM-DD') AS visit_date,
    people
FROM (
    SELECT s.id, s.visit_date, s.people
    FROM Stadium s
    JOIN Stadium s1 ON s1.id = s.id + 1
    JOIN Stadium s2 ON s2.id = s.id + 2
    WHERE s.people >= 100
      AND s1.people >= 100
      AND s2.people >= 100

    UNION

    SELECT s.id, s.visit_date, s.people
    FROM Stadium s
    JOIN Stadium s1 ON s1.id = s.id - 1
    JOIN Stadium s2 ON s2.id = s.id + 1
    WHERE s.people >= 100
      AND s1.people >= 100
      AND s2.people >= 100

    UNION

    SELECT s.id, s.visit_date, s.people
    FROM Stadium s
    JOIN Stadium s1 ON s1.id = s.id - 1
    JOIN Stadium s2 ON s2.id = s.id - 2
    WHERE s.people >= 100
      AND s1.people >= 100
      AND s2.people >= 100
)
ORDER BY visit_date;