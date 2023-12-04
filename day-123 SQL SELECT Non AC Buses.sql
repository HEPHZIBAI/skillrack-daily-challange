/*


A table called bus is created with the following DDL command:

CREATE TABLE bus(id INT, busregistrationnum VARCHAR(15), source VARCHAR(15),destination VARCHAR(30), ac BOOLEAN, sleeper BOOLEAN, seater BOOLEAN);

Write the SQL query to select id and busregistrationnum from the table bus where the ac is equal to 'False', sleeper is equal to 'True' and seater is equal to 'True'. Note: The id of the buses must be sorted in ascending order.
*/

select id,busregistrationnum from bus where ac='False' and sleeper='True' and seater ='True';