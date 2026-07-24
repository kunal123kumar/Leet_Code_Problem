# Write your MySQL query statement below
select name from salesPerson where sales_id NOT IN (select  o.sales_id from Company c 
 join  Orders  o on c.com_id = o.com_id where c.name = 'red');
