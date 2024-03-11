-- 코드를 입력하세요
SELECT B.CATEGORY,
SUM(S.SALES) AS TOTAL_SALES
FROM BOOK B INNER JOIN BOOK_SALES S ON B.BOOK_ID = S.BOOK_ID
WHERE DATE_FORMAT(S.SALES_DATE, '%Y-%m') = '2022-01'
GROUP BY CATEGORY
ORDER BY CATEGORY ASC;