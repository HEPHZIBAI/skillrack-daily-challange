/*
A table called person is created with the following DDL command:

CREATE TABLE person(id INT, name VARCHAR(30), age INT, weight INT,bleedgroup VARCHAR(3));

Write the SQL query to select id, name and bloodgroup from the table person where age is between 18 and 65 (excluding 18 and 65) and weight is greater than 50. Note: The id of the person must be sorted in ascending order.
*/

select id,name, bloodgroup from person where age 18 and age 5 and weight 50 order by id;