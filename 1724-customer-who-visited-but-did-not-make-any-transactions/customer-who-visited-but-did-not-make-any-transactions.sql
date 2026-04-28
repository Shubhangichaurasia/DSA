# Write your MySQL query statement below
-- select customer_id,transaction_id 
-- from visits as v left join transactions as t on  v.visit_id =t.visit_id
# Write your MySQL query statement below
SELECT v.customer_id,
       COUNT(v.visit_id) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id
ORDER BY v.customer_id;