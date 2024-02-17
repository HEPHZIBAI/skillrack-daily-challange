/*
A table called mobile is created with the following DDL command:

create table mobile (id int, brandname varchar(20), modelname varchar(20), price int);


Write the Java code using JDBC APIs to select the id, brandname, modelname and price from the table mobile.

Note:
The order of the columns in the result set must be id, brandname, modelname and price.
The result set must be ordered by the column brandname in ascending order.

IMPORTANT:
1. Place your code inside the execute method. You need not code/implement the main method.
2. DO NOT close the Database Connection conn in your code.

*/

﻿


import java.sql.Connection;
import java.sql.PreparedStatement; import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;
public class Hello 
{
	public static void execute(Connection conn, Scanner sc) 
	{
		String q="select id, brandname, modelname, price from mobile order by brandname asc"; 
		try(PreparedStatement s=conn.prepareStatement(q);
		ResultSet rs=s.executeQuery())
		{
			while(rs.next())
			{
				int i=rs.getInt("id");
				String b=rs.getString("brandname");
				String m=rs.getString("modelname"); 				int p=rs.getInt("price");
				System.out.println(i+" "+b+" "+m+" "+p);
			}
			catch(Exception e){}
		}//end of execute method
}//end of Hello class

