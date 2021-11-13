#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    time_t theTime = time(NULL); 
    tm * aTime = localtime (&theTime); 

cout<< "enter your birth year"<<endl; 
int birthYear = 0; 
cin>> birthYear;
cout<< "enter your birth month"<<endl;
int birthMonth =0; 
cin>> birthMonth; 
cout<<"enter your birth day"<<endl;
int thisYear = aTime->tm_year + 1900;
int thisMonth = aTime->tm_mon + 1; 
cout<< "you are "<<thisYear - birthYear<<" "<< "years old"<<" and "<< thisMonth - birthMonth<<" "<< "months"<<endl; 



  return 0;   
} 

