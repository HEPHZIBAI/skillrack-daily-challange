/*
A table called candidate is created with the following DDL command:

create table candidate (id int, name varchar(30), marks int);

Write the SQL statement to create a table called selectedcandidate with the columns name and marks from the table candidate whose marks is greater than or equal to 90.
*/

create table selectedcandidate (name varchar(30), marks int ); 

insert into selectedcandidate (name, marks) select name,marks from candidate where marks>=90;