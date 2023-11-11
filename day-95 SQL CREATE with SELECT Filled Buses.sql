/*
A table called bus is created with the following DDL command:

CREATE TABLE bus (id INT, number INT, totalseats INT, bookedseats INT);

Write the SQL statement to create another table called filledbus with the data populated from the columns id, number and totalseats from the table bus where the totalseats is equal to bookedseats.
*/

select id,number, totalseats into filledbus from bus;