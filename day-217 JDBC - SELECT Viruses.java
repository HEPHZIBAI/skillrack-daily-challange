/*
A table called virus is created with the following DDL command:
Proceed to Solve the Program

	create table virus (id int, name varchar(30),

Write the Java code using JDBC APIs to select the id, name and totaldeaths from the table virus whose totaldeaths is greater than 10000.

Note:
	The order of the columns in the result set must be id, name and totaldeaths.
	The result set must be ordered by the column name in alphabetical order.

IMPORTANT:
	1. Place your code inside the execute method. You need not code/implement the main method.
	2. DO NOT close the Database Connection conn in your code.
*/


﻿import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class Hello 
{
	public static void execute(Connection conn, Scanner sc) 
	{
		try {
			String sql = "SELECT id, name, totaldeaths FROM virus WHERE totaldeaths > 10000 ORDER BY name ASC"; 
			PreparedStatement stmt=conn.prepareStatement(sql);
			ResultSet rs = stmt.executeQuery();
			while(rs.next()) 
			{
				int id = rs.getInt("id");
				String name = rs.getString("name");
				String totaldeaths = rs.getString("totaldeaths"); 
				System.out.println(id+" "+name+" "+totaldeaths);

			}	
			rs.close();
			stmt.close();
		} 
		catch(SQLException e) 
		{
			e.printStackTrace();
		}
	}
}