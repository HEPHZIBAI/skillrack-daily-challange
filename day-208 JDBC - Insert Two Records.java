/*
A table called student is created with the following DDL command:

create table student (id int, name varchar(20),physics int, maths int, chemistry int);

Write the Java code using JDBC APIs to insert two student records with the following values:
id as 1, name as "Student1", physics as 85, maths as 95 and chemistry as 89.
id as 2, name as "Student2", physics as 91, maths as 96 and chemistry as 93.

IMPORTANT:
	1. Place your code inside the execute method. You need not code/implement the main method.
	2. DO NOT close the Database Connection conn in your code.

*/



﻿
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class Hello 
{
	public static void execute(Connection conn, Scanner sc) 
	{
		try
		{
			PreparedStatement s = conn.prepareStatement( "insert into student values(?,?,?,?, ?)");
			s.setString(1,"1");
			s.setString(2, "Student1");
			s.setString(3,"85");
			s.setString(4,"95");
			s.setString(5,"89");
			int rowsAffected=s.executeUpdate();
			s.setString(1,"2");
			s.setString(2,"Student2");
			s.setString(3,"91");
			s.setString(4,"96");
			s.setString(5,"93");
			rowsAffected=s.executeUpdate();
		}
		catch (SQLException e)
		{
		}
	}//end of execute method
}//end of Hello class
