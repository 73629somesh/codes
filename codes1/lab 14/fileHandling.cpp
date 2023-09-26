#include <iostream>
#include <fstream>
using namespace std;


int main()
{
fstream new_file; 
new_file.open("new_file_write.txt",ios::out);  
if(!new_file) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file<<"Learning File handling";    //Writing to file
new_file.close(); 
}   
new_file.open("new_file.txt",ios::in);
//new_file.write((char*)&new_file,sizeof(new_file));
// Employee Emp_1;
//   Emp_1.Name="John";
//   Emp_1.Employee_ID=2121;
//   Emp_1.Salary=11000;

   
return 0;
}



//   file1.open("Employee.txt", ios::app);
//   
//   file1.close();
//   //Reading data from Employee.txt
//   ifstream file2;,ios::in
//   file2.open("Employee.txt");
//   file2.read((char*)&Emp_1,sizeof(Emp_1));
//   printf("\nName :%s",Emp_1.Name);
//   printf("\nEmployee ID :%d",Emp_1.Employee_ID);
//   printf("\nSalary :%d",Emp_1.Salary);
//   file2.close();
//   return 0;
//}

