#include <bits/stdc++.h> 
using namespace std; 
  
// Find the first digit 
int LastTwoDigit(long long int num) 
{ 
    // Get the last digit from the number 
    int one = num % 10; 
  
    // Remove last digit from number 
    num /= 10; 
  
    // Get the last digit from 
    // the number(last second of num) 
    int tens = num % 10; 
  
    // Take last digit to ten's position 
    // i.e. last second digit 
    tens *= 10; 
  
    // Add the value of ones and tens to 
    // make it complete 2 digit number 
    num = tens + one; 
  
    // return the first digit 
    return num; 
} 
  
// Driver program 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    	int a,b;
    	cin>>a>>b;
 	    long long int num = 1; 
    	num = pow(a,b); 
	    cout << LastTwoDigit(num) << endl; 

    }
    return 0; 
} 