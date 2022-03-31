#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
using namespace std;

int main()
{
	pid_t a = fork();
	if(a>0)
	{
		wait(NULL);
		pid_t b = fork();
		if(b>0)
		{
				wait(NULL);
			pid_t c = fork();
			if(c>0)
			{
					wait(NULL);
					cout<<"Parent Process: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
			}else if(c==0)
		        	cout<<"Child 1: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
			
		}else if(b==0)
		{
		         	cout<<"Child 2: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
		}
		
	}else if(a==0)
	{
	            	cout<<"Child 3: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
	}
	    
	    pid_t d = fork();
	if(d>0)
	{
		wait(NULL);
		pid_t e = fork();
		if(e>0)
		{
				wait(NULL);
			pid_t f = fork();
			if(f>0)
			{
					wait(NULL);
					cout<<"Parent Process: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
			}else if(f==0)
		        	cout<<"Child 1: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
				    	
		}else if(e==0)
		{
		         	cout<<"Child 2: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
		}
		
	}else if(d==0)
	{
	            	cout<<"Child 3: "<<endl;
					cout<<"PID : "<<getpid()<<endl;
				    cout<<"Parent PID : "<<getpid()<<endl;
				    cout<<endl;
}


