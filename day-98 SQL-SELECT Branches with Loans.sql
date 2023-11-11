/*
A table called customer is created with the following DDL command:

CREATE TABLE customer (id INT, accountnum INT, name VARCHAR(20),loanamount INT, branchname VARCHAR(30));

Write the SQL query to select the branchname and its sum of loanamount from the table customer.

Note: The total loanamount of the branches must be sorted in descending order.
*/

select destint (branchname),sum(loanamount) from customer group by branchname order by sum(loanamount) desc;