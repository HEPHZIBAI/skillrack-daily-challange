/*
A table called fruit is created with the following DOL command:

CREATE TABLE fruit (id INT, name VARCHAR(30), quantityinkg INT);

Write the SQL statement to update the quantity of fruits having less than 5kg by adding 5 more Kgs in the table fruit.
*/

update fruit set quantityinkg-quantityinkg+5 where quantityinkg <5;