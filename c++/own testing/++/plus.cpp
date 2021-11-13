#include <iostream>

using namespace std; 
int main()
{
int x = 4;
int y = 9; 
cout<<"x = "<< x <<endl;
cout<<"y = "<<y <<endl;
cout<<"x+ y++ = "<< x+ y++ <<endl;
cout<<"y = "<<y<<endl;
cout<<"x+y = "<< x+y<<endl;

int z = 4;
int n = 9;
cout<< "-----------" << endl;
cout<<"z = "<<z << endl;
cout<<"n = "<<n << endl;
cout<<"z + ++n "<< z+ ++n<<endl;
cout<<"n = "<<n<<endl; 
cout<<"z+n = "<<z+n<<endl; 

return 0; 
}; 