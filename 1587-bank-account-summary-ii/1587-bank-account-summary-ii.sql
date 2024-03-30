SELECT U.name, SUM(T.amount) AS balance
FROM Transactions T
JOIN Users U ON T.account = U.account
GROUP BY U.account
HAVING balance > 10000;