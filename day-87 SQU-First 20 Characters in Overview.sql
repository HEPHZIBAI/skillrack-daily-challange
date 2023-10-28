/*
A table called book is created with the following DDL command:

CREATE TABLE book (id INT, name VARCHAR(30), overview TEXT);

Write the SQL query to select id, name and the first 20 characters of the overview from the table book.
Note: The id of the books must be sorted in ascending order.
*/
select id,name,left(overview, 20) from book order by id;