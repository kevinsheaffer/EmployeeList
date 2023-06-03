#include <string>
#include"LinkedList.cpp"
#include"Employee.cpp"
#include<iostream>
using namespace std;

//integer linked list
void integerList()
{
//create linkedlist object 
LinkedList<int> l1;
cout<<"Create a list of integers: \n";
//take input till 0 is entered
int x=1;
int key;
//get input 
while(x!=0)
{
    cin>>x;
    //if 0 break
    if(x==0)
        break;
    //insert into the linked list
    l1.push_front(x); 
}
cout<<"The size of linked list is: "<<l1.get_size()<<endl;
cout<<"The linked list is: \n";
l1.print();
//take key input
cout<<"Enter the key: ";
cin>>key;
cout<<"Is the key in the list? ";
//find in the list
cout<<l1.find(key)<<endl;
//remove values 
cout<<"How many values you want to remove? ";
cin>>key;
//call pop_front key times
for(int i=0;i<key;++i)
{
    l1.pop_front();
}
//print the list
cout<<"The list is: \n";
l1.print();
}
//string linked list
void stringList()
{
//create linkedlist object 
LinkedList<string> l1;
cout<<"Create a list of strings: \n";
//take input till exit is entered
string x="";
string key;
int count=0;
//get input 
while(x!="exit")
{
    cin>>x;
    //if exit break
    if(x=="exit")
        break;
    //insert into the linked list
    l1.push_front(x); 
}
cout<<"The size of linked list is: "<<l1.get_size()<<endl;
cout<<"The linked list is: \n";
l1.print();
//remove values 
cout<<"How many values you want to remove? ";
cin>>count;
//call pop_front key times
for(int i=0;i<count;++i)
{
    l1.pop_front();
}
//print the list
cout<<"The list is: \n";
l1.print();
}


//employee linked list
void employeeList()
{
//create linkedlist object 
LinkedList<Employee> l1;
cout<<"Create a list of employees: \n";
//take input till exit is entered
string x="";
int id=1;
string name;
string dept;
string key;
int count=0;
//get input 
while(id!=0)
{
    //print the message
    cout<<"Enqueue employee id, name, dept (enter id 0 to stop): ";
    cin>>id;
    cin>>name;
    cin>>dept;
    //if 0 break
    if(id==0)
        break;
    //create new employee
    Employee e(id,name,dept);
    //insert into the linked list
    l1.push_front(e); 
}
cout<<"The size of linked list is: "<<l1.get_size()<<endl;
cout<<"The linked list is: \n";
l1.print();
//remove values 
cout<<"How many values you want to remove? ";
cin>>count;
//call pop_front key times
for(int i=0;i<count;++i)
{
    l1.pop_front();
}
//print the list
cout<<"The list is: \n";
l1.print();
}

int main()
{
//output for integer list
integerList();
//create the linked list of string
stringList();
//employee list
employeeList();
return 0;
}
