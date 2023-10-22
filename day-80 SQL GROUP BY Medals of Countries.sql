/*
A table called player is created with the following DDL command:

CREATE TABLE player (id INT, name VARCHAR(30), medalscount INT,country VARCHAR(30));

Write the SQL query to list all the countries along with their total medals from the table player.

Note: The total medals of the countries must be sorted in descending order.
*/

select country, sum(medalscount) as total_medals from player group by country order by total_medals desc;