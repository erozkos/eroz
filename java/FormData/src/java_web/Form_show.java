package java_web;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet("/Form_show")
public class Form_show extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE html>\n" +
				"<html>\n" +
				"<head><title>Deneme Sayfasi</title></head>\n" +
				"<body bgcolor=\"white\" style = \" width: 500px; margin: 20px auto; padding: 10px 30px; border: 1px solid white; background: #ddeeff;\">\n<h1>KIMLIK </h1>");
		String isim = request.getParameter("isim");
		if(isim.length() == 0 )
			out.println("<h1 style = \"color:blue\">Lutfen ad soyad kısımlarını doldurunuz</h1>");
		else {
				out.println("<TABLE BORDER=1 ALIGN=CENTER style = \" BGCOLOR= white;margin-top:50px;margin-left: 0in\">\n" +
						"<TR BGCOLOR= white\"\">\n" +
						"<TH>Parametre isimleri<TH>Parametre verileri(s)"+
						"<TR><TH> Ogr<TD></b>"+request.getParameter("ogr") + "\n"+
						"<TR><TH> tc<TD></b>"+request.getParameter("tc") + "\n"+
						"<TR><TH> ISIM<TD></b>"+request.getParameter("isim") + "\n"+
						"<TR><TH> SOYAD <TD>"+request.getParameter("soyad") + "\n"+
						"<TR><TH> CINSIYET <TD>"+request.getParameter("check") + "\n"+
						"<TR><TH> MESAJ  <TD>"+request.getParameter("mesaj") + "\n<TABLE>");
		}
		out.println("</body></html>");
	}
		
}
