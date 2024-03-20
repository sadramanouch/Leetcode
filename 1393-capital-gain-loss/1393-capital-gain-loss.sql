SELECT stock_name,
       SUM(
           CASE 
               WHEN operation = 'Sell' THEN price - prev_price
               ELSE 0
           END
       ) AS capital_gain_loss
FROM (
    SELECT stock_name,
           operation,
           operation_day,
           price,
           LAG(price) OVER(PARTITION BY stock_name ORDER BY operation_day) AS prev_price
    FROM Stocks
) AS t
WHERE operation = 'Sell'
GROUP BY stock_name;
