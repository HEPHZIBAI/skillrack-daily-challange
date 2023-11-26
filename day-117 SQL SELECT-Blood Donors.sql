/*
A table called donor is created with the following DDL command:

CREATE TABLE donor(id INT, name VARCHAR(20), bloodgroup VARCHAR(3)

Write the SQL query to select the id, name and bloodgroup from the table donor where bloodgroup is not equal to 'AB+'.
Note: The name of the donors must be sorted in alphabetical order.
*/

select id,name, bloodgroup from donor where bloodgroup<>'AB+' order by name;