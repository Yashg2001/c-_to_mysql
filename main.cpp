 #include <winsock.h>
 #include <iostream>
 #include <mysql.h>
 #include <windows.h>
 #include <sstream>


using namespace std;

int main()
{
   MYSQL* conn;
   conn=mysql_init(0);
   conn=mysql_real_connect(conn, "127.0.0.1", "yash", "yash123", "SKIT_ERP", 0, NULL, 0);
   int qstate =0;
   stringstream ss;
   string name="yashvijay";
   ss<<"INSERT INTO test1(name) VALUES('"<<name<<"')";
   string query=ss.str();
   const char* q=query.c_str();
   qstate=mysql_query(conn,q);
   if(qstate==0)
    cout<<"record inserted.."<<endl;
   else
    cout<<"failed"<<endl;


}
