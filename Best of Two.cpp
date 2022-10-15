#include <iostream>
using namespace std;

int main() 
{
	       int a,b,i,n;
	       cin >> i;
	       
	      
	       if (i>1000)
	       
	       {
	           cout << "Number of test cases should not be greater than 1000.";
	       }
	       else if (i<1)
	       {
	           cout << "Atleast 1 test case is supposed to be given." << endl;
	       }
	       else
	       {
	           cout << "The best of 2 marks are:" << endl;
	       
	            for (n=1; n<=i; n++)
	            {
	                cin >> a >> b;
	                
	                if (a<0)
	                    cout << "value of a should be positive." ;
	                
	                else if (b<0)
	                    cout << "value of b should be positive." ;
	                
	                else if (a>100)
	                    cout << "value of a should be less than 101." ;
	                
	                else if (b>100)
	                    cout << "value of b should be less than 101." ;
	                
	                else
	                {
	                    if (a>b)
	                        cout << a << endl;
	                    else
	                        cout << b << endl;
	                }
	            }
	       }
	       
	       
	       
	       
	       
	       
	return 0;
}
