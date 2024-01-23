/*


A table called sweet is created with the following DDL command:

CREATE TABLE sweet (id INT, name VARCHAR(30), mainingredients VARCHAR(100), price INT);

Write the SQL query to select the id, name and price from the table sweet where the mainingredients contains 'Milk' or 'milk'. Note: The price of the sweets must be sorted in ascending order
*/


select id,name,price from sweet where mainingredients like '%milk%' or mainingredients like '%Milk%' order by price;