SELECT SUM(SCORE) AS SCORE, E.EMP_NO, E.EMP_NAME, E.POSITION, E.EMAIL
FROM HR_EMPLOYEES E INNER JOIN HR_GRADE G ON E.EMP_NO = G.EMP_NO
GROUP BY YEAR, EMP_NO
HAVING G.YEAR = '2022'
ORDER BY SUM(SCORE) DESC
LIMIT 1;