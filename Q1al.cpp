#include<iostream>
#include <cstdlib>   
#include <chrono>  // for high_resolution_clock
using namespace std;

//School Method
bool algorithm_1(int n) 
{ 
    if (n <= 1) 
        return false; 

    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}  

//Optimised School Method
bool algorithm_2(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

//Fermat Method
/* Iterative Function to calculate (a^n)%p in O(logy) */
int power(int a, unsigned int n, int p) 
{ 
    int res = 1;      // Initialize result 
    a = a % p;  // Update 'a' if 'a' >= p 
  
    while (n > 0) 
    { 
        // If n is odd, multiply 'a' with result 
        if (n & 1) 
            res = (res*a) % p; 
  
        // n must be even now 
        n = n>>1; // n = n/2 
        a = (a*a) % p; 
    } 
    return res; 
} 
  
/*Recursive function to calculate gcd of 2 numbers*/
int gcd(int a, int b) 
{ 
    if(a < b) 
        return gcd(b, a); 
    else if(a%b == 0) 
        return b; 
    else return gcd(b, a%b);   
} 
  
// If n is prime, then always returns true, If n is 
// composite than returns false with high probability 
// Higher value of k increases probability of correct 
// result. 
bool algorithm_3(unsigned int n, int k) 
{ 
   if (n <= 1 || n == 4)  return false; 
   if (n <= 3) return true; 
  
   while (k>0) 
   { 
       int a = 2 + rand()%(n-4);   
  
       // Checking if a and n are co-prime 
       if (gcd(n, a) != 1) 
          return false; 
   
       // Fermat's little theorem 
       if (power(a, n-1, n) != 1) 
          return false; 
  
       k--; 
    } 
  
    return true; 
} 

int main(){
	int k=4;
	int n;
	cout<<"Enter the number to find if it's a prime or not: ";
	cin>>n;
	
	
	
	auto start1 = chrono::high_resolution_clock::now();
	algorithm_1(n)?  cout << " true\n": cout << " false\n"; 
	auto end1 = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed1 =  end1-start1;
	
	auto start2 = chrono::high_resolution_clock::now();
	algorithm_2(n)?  cout << " true\n": cout << " false\n"; 
	auto end2 = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed2 =  end2-start2;
	
	auto start3 = chrono::high_resolution_clock::now();
	algorithm_3(n,k)?  cout << " true\n": cout << " false\n"; 
	auto end3 = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed3 =  end3-start3;
	
	cout<<"Time for different algos\n"<<elapsed1.count()<<"s"<<endl<<elapsed2.count()<<"s"<<endl<<endl<<elapsed3.count()<<"s"<<endl;

}
  
