# Write your MySQL query statement below
SELECT o.customer_number
FROM Orders o
LEFT JOIN Orders o1 ON o.customer_number = o1.customer_number
GROUP BY o.customer_number
ORDER BY COUNT(o1.order_number) DESC
LIMIT 1;