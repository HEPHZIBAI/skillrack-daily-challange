/*
A table called player is created with the following DDL command:

CREATE TABLE player(id INT, name VARCHAR(30), odimatches INT, testmatches INT, t2@imatches INT);

Write the SQL query to select the id, name, odimatches, testmatches and t20imatches from the table player where the odimatches, testmatches and t20imatches are greater than 10.
Note: The name of the players must be sorted in alphabetical order.
*/
select id, name, odimatches, testmatches, t20imatches from player where t20imatches>10 and odimatches>10 and testmatches>10 order by name;