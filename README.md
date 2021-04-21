# RecursionA day with Recursion
February 16, 2021

## PMI (Principle of Mathematical Induction)
Let’s assume a function f(n)

- for k==1, the answer is known
- for f(k), we assume it is true;
- for (k+1) we prove it is true using above two state
- Recursion is based on this particular principle

## Bookish defination
Function calling itself directly or indirectly

Recursion in real life
1. Base case (It is a smallest subproblem of the bigger problem )
3. Assumption / Recursive case (most important)

In this, we break the above problem into smaller subproblems of the same type and then assume that the smaller problem will be solved by recursion. You need to assume this thing and not care how things are working (matlb bilkul dimaag ni lagana tabhi problem solve hogi).

3. Find the answer

In simple terms :
- Write the code
- See the answer
- If you are getting the correct answer, then look how you are getting the answer :( )
- Don’t even try to find how things are working before getting the correct answer
Now that we are getting the correct answer, let’s see how it is working and the output in the stack memory

```cpp
void f(int n){

       //base case solving for the smallest problem
       if(n==0){
          return 1;
       }

       // write the recursive expression and assume that it will solve the bigger problem
       f(n-1)

       //solve the problem
       cout<<n;
        

   }
   int main(){
       f(5);
       return 0;
   }
```
- main will load in the stack memory and then it will call the f(5)
- f(5) will load in the stack memory and it will call f(4)
- f(4) will load in the stack memory and it will call f(3)
- f(3) will load in the stack memory and it will call f(2)
- f(2) will load in the stack memory and it will call f(1)
- f(1) will load in the stack memory and it will call f(0)
- Now as it hits the base case, it will return 1 and f(0) will get destroyed from the stack memory
- Then f(1) will be returned and will print 1 and f(1) will get destroyed from the stack memory
- Then f(2) will be returned and will print 2 and f(2) will get destroyed from the stack memory
- Then f(3) will be returned and will print 3 and f(3) will get destroyed from the stack memory
- Then f(4) will be returned and will print 4 and f(4) will get destroyed from the stack memory
- Then f(5) will be returned and will print 5 and f(5) will get destroyed from the stack memory
- At last, main will get destroyed from the stack memory
