/*
A table called student is created with the following DDL command:

CREATE TABLE student (regnum INT, name VARCHAR(30), arrearscount INT);

Write the SQL query to list all the arrearscount along with the number of students having that arrearscount from the table student.

Note: The arrearscount of the students must be sorted in descending order.
*/

select arrearscount, count (regnum) from student group by arrearscount order by arrearscount desc;