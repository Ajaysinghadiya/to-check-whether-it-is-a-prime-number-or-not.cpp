#include <iostream>//header file includer
using namespace std;//for standard input output

int main()//execution of program begins from here
{
    int n,i;//declaring n and i.
    cout << "please enter any number to check whether it is a prime number or not" << endl;//printing a line
    cin >> n;//taking n as input from user
    for( i=2;i<n;i++)/*loop begins from here.this for loop will work like ,a prime number is 
    prime then it is divisible by self and 1,so by using this concept,we will begins the loop
    from i=2 upto n-1 because if it divisible in between 2 and n-1 then it is not a prime number*/
    {
        if(n%i==0)//if any of i is possible for that is is devisible by n it is not a prime umber
        {
            cout<<n<<" is not a prime number"<<endl;
            break;//and then exits from all the loop
        }
        
    }
    if(i==n)/*if this is not happens,mean if there is no any i which is devisible by n,then 
    i will complete the above for loop,and we can conclude that there is only 1 and that no. self
    is devisibe by n,so it will be a prime number,so for this we have to print it outside the loop
    that it is a prime number but there is only one problem that it always print on screan that
    it is a prime number ,for that problem ,we will write a statement in which we wwill check 
    that if i is completing this for loop or not if it completes then the value of i will be
    equal to the n and we will print that it is a prime number for that i*/
        cout<<n<<" is  a prime number"<<endl;//printing that line

    return 0;
}
