#include<iostream>
#include<string>
#include <sstream>

using namespace std;
int splitString(string str)
{
    int number;
    string alpha, num, special;
    for (int i=0; i<str.length(); i++)
    {
       if (isdigit(str[i]))
            num.push_back(str[i]);
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            alpha.push_back(str[i]);
        else
            special.push_back(str[i]);
      
		 { 
		     if (special.length())
		    
			 return 0;
		 
		     else
		     {
		    return number;
		}
			
		}
        
} 


 
  stringstream ss;
  ss << num;
  ss >> number;
    return number;
    

}


int main() {

 
    string A, B, C;

     
    cout<<"Enter number A";
    cin>>A;
    cout<<"Enter number B";
    cin>>B;
    cout<<"Enter number C";
    cin>>C;
    
    
   int a = splitString(A);
   int b=   splitString(B);
   int c=  splitString(C);
     
     cout<<"value of A is"<<a<<endl;
    cout<<"value of B is"<<b<<endl;
    cout<<"value of C is"<<c<<endl;
    
    if( a == 0)
    {
    	a = c-b;
}

    else if (b == 0)
    {
    	b = c - a;
	}
	
	
    else if (c == 0)
    {
    	c = b+a;
	}
	cout<<"Value of a is" <<a<<endl;
    cout<<"Value of b is" <<b<<endl;
    cout<<"Value of c is" <<c<<endl;
    return 0;
}

  







