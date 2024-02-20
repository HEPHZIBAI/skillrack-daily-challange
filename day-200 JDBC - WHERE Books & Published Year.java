/*

A table called book is created with the following DDL command:

create table book(id int, name varchar(20), author varchar(20), publishedyear int);

Write the Java code using JDBC APIs to select the name and author for each book whose publishedyear is NOT equal to 2009.

Note:
The order of the columns in the result set must be name and author.
The result set must be ordered by the column name in ascending order.

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
			PreparedStatement ps=conn.prepareStatement("select name, author from book where publishedyear!=2009 order by name");
			ResultSet rs = ps.executeQuery();
			while(rs.next())
			{
				System.out.println(rs.getString("name")+" "+ rs.getString("author"));
			}
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
	}//end of execute method
}//end of Hello class
་

