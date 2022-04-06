#include <iostream>
using namespace std;

int add(int a, int b)
{
for(int i=1;i<=b;i++) //for loop will start from 1 and move till the value of second
						// number , first number(a) is incremented in for loop
{ a++;			
}
return a;
}

int main(){

int a=add(10,32); // first number is 10 and second number is 32 , for loop will start
cout<<a;	 // from 1 and move till 32 and the value of a is incremented 32 times
			// which will give us the total sum of two numbers
return 0;	

}
// This code is contributed by sayamsobti
