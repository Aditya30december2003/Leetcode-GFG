# Write your MySQL query statement below
Select Product.product_name,Sales.year,Sales.price from Product,Sales
Where Product.product_id=Sales.product_id