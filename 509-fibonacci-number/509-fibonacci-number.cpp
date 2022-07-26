class Solution {
public:
    int fib(int n) {
     
        if(n<=1) 
            return n;
          
       return fib(n-1) + fib(n-2); //   
        
    }
};


// to do with dp follow three steps 

// 1-create a vector of dp initialize it with -1
// 2- check the base case 
// 3- again check  if the we already cmputed the value 
// 4- store whatever computed  in vector of dp