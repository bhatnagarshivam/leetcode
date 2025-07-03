# Write your MySQL query statement below
Select product.product_name,Sales.year,Sales.price
FROM Sales
INNER JOIN product
ON sales.product_id=product.product_id;
