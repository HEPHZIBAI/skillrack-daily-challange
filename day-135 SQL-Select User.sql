
/*
A table called user is created with the following DDL command:

CREATE TABLE user (id INT, name VARCHAR(30), role VARCHAR(10));

Write the SQL query to select id, name and role from the table user.

Note: The role of the users must be sorted in alphabetical order and the id of the users must be sorted in descending order.
*/
select id,name,role from user order by role,id desc;