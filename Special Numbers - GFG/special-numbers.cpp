//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
    
public:
    int getSpecialNumber(int N)
    {
        //code here.
        int result=0, temp=N-1, tens=1;

        

        while(temp)

         {

             result=result+(temp%6)*tens;

             tens*=10;

             temp=temp/6;

         }

        

        return result;
    }

};



//{ Driver Code Starts.

int main() 
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    int N;
	    cin>> N;
	     Solution ob;
	    cout<<ob.getSpecialNumber(N)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends