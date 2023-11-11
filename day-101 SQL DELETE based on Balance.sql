/*
A table called debtor is created with the following DDL command:

CREATE TABLE debtor (id INT, accountnum INT, name VARCHAR(20),sanctionedamount INT, currentbalance INT);

Write the SQL statement to delete the records of the debtor who have paid off the entire loan amount (Le, Delete all the debtors who have their currentbalance as 0).
*/

delete from debtor where currentbalance=0;