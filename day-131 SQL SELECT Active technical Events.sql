/*
A table called event is created with the following DDL command:

CREATE TABLE event (id INT, title VARCHAR(100),type VARCHAR(10) , attendeescount INT ,active BOOLEAN);

Write the SQL query to select id, title, and attendeescount from the table event where active is equal to 'true', type is equal to 'TECH' and attendeescount is greater than 50.

Note: The id of the events must be sorted in ascending order.
*/

select id, title, attendeescount from event where active=true and type='TECH' and attendeescount>50 order by id;