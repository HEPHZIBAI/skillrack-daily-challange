/*
A table called user is created with the following DDL command:

CREATE TABLE user (id INT, regnum INT, name VARCHAR(20));

Write the SQL query to select name and loginid from the table user where loginid is the concatenation of regnum and "@srack". Note: The name of the users must be sorted in lexicographical order.
*/

select name, regnum || '@srack' from user order by name;