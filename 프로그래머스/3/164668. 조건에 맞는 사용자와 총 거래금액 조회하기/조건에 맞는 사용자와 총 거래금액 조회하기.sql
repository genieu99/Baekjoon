-- 코드를 입력하세요
SELECT U.USER_ID, NICKNAME,
SUM(PRICE) AS TOTAL_SALES
FROM USED_GOODS_BOARD BOARD INNER JOIN USED_GOODS_USER U ON BOARD.WRITER_ID = U.USER_ID
WHERE BOARD.STATUS = 'DONE'
GROUP BY BOARD.WRITER_ID
HAVING SUM(PRICE) >= 700000
ORDER BY TOTAL_SALES ASC;