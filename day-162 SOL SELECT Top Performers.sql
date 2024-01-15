/*

A table called player is created with the following DDL commands

CREATE TABLE player(10 ENT, name VARCHAR(30), country VARCHAR(30), goldmedalscount INT, silvermedalscount INT,bronzemedalscount INT);

Write the SQL query to select id and name from the table player where the country is equal to 'INDIA', the goldmedalscount is greater than 5, the silvermedalscount is greater than 10 and the bronzemedalscount is Greater than 15.

Note: The id of the players must be sorted in ascending order.
*/

select id, name from player where country='INDIA' and goldmedalscount>5 and silvermedalscount>10 and bronzemedalscount>15 order by id;