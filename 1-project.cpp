/*since i'm practicing, thus i'm not writing the easy and shorter version of this program,
i'll be trying to do the same with other programs as well. this one can also be made shorter,
but i intend not to make it*/

/*One hot summer day Pete and his friend Billy decided to buy a watermelon.
They chose the biggest and the ripest one, in their opinion.
After that the watermelon was weighed, and the scales showed w kilos.
They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, 
that's why they want to divide the watermelon in such a way,
that each of the two parts weighs even number of kilos, 
at the same time it is not obligatory that the parts are equal. 
The boys are extremely tired and want to start their meal as soon as possible, 
that's why you should help them and find out, 
if they can divide the watermelon in the way they want. 
For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) 
— the weight of the watermelon bought by the boys.

Output
Print YES, 
if the boys can divide the watermelon into two parts, 
each of them weighing even number of kilos; and NO in the opposite case.*/

#include<iostream>
#include<cmath>
using namespace std;

int findhalf(int w)
{
    int result= w%2;
    if(result == 0 && w<=100 && w >=1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }    
    return result;   
}
int main()
{
    cout<<"Enter a number w, w being => 1<=w<=100: "<<endl;
    int a;
    cin>>a;
    cout<<findhalf(a);
    return 0;
}
