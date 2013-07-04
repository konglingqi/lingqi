#include "StdAfx.h"
#include <afx.h>
#include <iostream>
#include <string.h>
#include<cstdlib>
#include<ctime>
#define MAX 10000000
using namespace std;
//char unit[]="F[+F][-F]";
//char unit[]="FB";
 
//char p1[] = "/[+FB][-FB]";
//char p2[] = "/T[-FB]";
 
//char p3[] = "/[+FB]T";
//char b[] ="0.6";
#define l 0.83f
#define r 0.75f
//char unit[] = "F(S,R)B(S*l,R*r)";
//char p1[] = "/[+F(S,R)B(S*l,R*r)][-F(S,R)B[S*l,R*r]]";
char fortree[MAX] ; 
char temp[MAX];
 char unit[]="FB";
char p1[] = "/[+FB][-FB]";
char p2[] = "/[+FB]T";
char p3[] = "/T[-FB]";
int signal=0;
int count(char* a)
{  int counter = 0;
	while(*a!='\0')
	{
		counter++;
		a++;
	}
	return counter;
}


int sum = 0;

void  CharReWrite()
{
	 
	int i,j;
	 srand((unsigned)time(NULL));
	 float m_random; 
	strcpy(fortree,unit); 
	
	for(i = 0;i<2;++i)
	{  
		int b = count(fortree);
		memset(temp,0,sizeof(temp));
	    for(j=0;j<b;++j)
		{  
			 
		   m_random= rand()%10/10.0f;
			 
			switch(fortree[j])
			{   
				
			    case 'B':
					strcat(temp,p1);
					break;
			/*	if( m_random<0.3f)
					 {
						strcat(temp,p2);    
					    break;
					}
					
				else
						 
					{
						if(signal==0)
						{
							strcat(temp,p1);   
							signal=1;
					        break;
						}
						else
							{
								strcat(temp,p3); 
								signal = 0;
								break;
						}

					}*/
			 
				case 'A' :
					strcat(temp,unit);
					break;
				case '#':
				case 'f':
				case '[':
				case ']':
				case '+':
				case '-':       
				case 'F':
				case '/':
				case 'T':
					   strncat(temp,fortree+j,1);
					   break;
			}
        }
		strcpy(fortree,temp);
		// cout<<fortree<<endl;
	   }
	  for(i=0;i<count(fortree);++i)
	  {
		  if(fortree[i]=='F')
			  ++sum;
	  }
	  cout<<sum;
	  cout<<fortree;
}
void randplace()
{
	 srand((unsigned)time(NULL));
	 
}

int main()
{    
  // CharReWrite();
	 srand((unsigned)time(NULL));
	 int a[20];
	 int k;
	for(int i=0;i<20;++i)
	{   if(rand()%2==1)
	{
		k=1;

	}
	else 
		k=-1;
		a[i] = k*rand()%150;
		cout<<a[i]<<" ";
	}


	 return 0;
}
/*	cout<<"Please input the deep: ";
	int a;
	int i,j;
    cin>>a;
	strcpy(fortree,unit); 
	for(i = 0;i<a;++i)
	{
		int b = count(fortree);
		memset(temp,0,sizeof(temp));
		int j=0;
		while(j<b)
		{
			switch(fortree[j])
			{
			case 'B':

			}
		}
	}
	
	for(i = 0;i<a;++i)
	{  
		int b = count(fortree);
		memset(temp,0,sizeof(temp));
	    for(j=0;j<b;++j)
		{ // m_random =rand()%10/10.0f;
			switch(fortree[j])
			{   
				
			    case 'B':
				   strcat(temp,p1); 
				   
				case '[':
				case ']':
				case '+':
				case '-':
				case 'F': 
				case '/':
					 
					   strncat(temp,fortree+j,1);
			}
        }
		strcpy(fortree,temp);
	    
	}
	 
	
	 
	 
	 


/*	int   i;
double   d;
srand((unsigned)time(NULL));
for(i=0;i <30;i++)
{
        d=((double)rand())/RAND_MAX;
        printf( "d=%.1f\n ",d);
}
*/ 
	/*double a;
    int i;
    char* chaValue = "116.397380;39.908395";
 double x = 0.0;
 double y = 0.0;
 sscanf(chaValue, "%lf;%lf", &x, &y);

 cout<<x<<" "<<y;*/
/*char ch1[10];
double x;
x = -14.876;
sprintf(ch1, "%lf", x);
printf("%s\n", ch1);
 */
 