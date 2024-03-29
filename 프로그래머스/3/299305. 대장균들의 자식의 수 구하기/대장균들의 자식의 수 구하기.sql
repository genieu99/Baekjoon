-- 코드를 작성해주세요
WITH ECOLI_PARENT AS (
    SELECT
        COUNT(*) AS COUNT,
        PARENT_ID
    FROM ECOLI_DATA
    GROUP BY PARENT_ID
)

SELECT
    D.ID,
    CASE
        WHEN P.COUNT IS NULL THEN 0
        WHEN P.COUNT IS NOT NULL THEN P.COUNT
    END AS CHILD_COUNT
FROM ECOLI_DATA D LEFT JOIN ECOLI_PARENT P ON D.ID = P.PARENT_ID
ORDER BY ID ASC;