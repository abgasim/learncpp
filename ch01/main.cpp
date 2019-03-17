#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <numeric>  //accumulate

template <class Type> 
int count (const Type& val, const std::vector<Type>& vec)
{
    return std::count(vec.begin(),vec.end(),val);
}
template <class Type> 
int count (const Type& val, const std::list<Type>& vec)
{
    return std::count(vec.begin(),vec.end(),val);
}
/*
Exercise 10.1 :
   The algorithm header defines a function named count that,
   like find takes a pair of iterators and a value. count 
   returns a count of how often that value appears. 
   Read a sequence of ints into a vector and print count 
   of how many elements have a give value.

Exercise 10.2 :
   Repeat the previous progarm but read values int list 
   of strings.
*/
int sum1(std::initializer_list<int> il)
{
    return std::accumulate(il.begin(),il.end(),0);
}
int sum0(std::initializer_list<int> il)
{
    int sum = 0;
    for (const auto &elem : il)
    {
        sum+=elem;
    }
    return sum;
}
int main()
{
    std::vector<int> v0{1,2,3,1,5,1,7,1,9};
    std::cout<<count(1,v0)<<'\n';
    std::list<std::string> str {"r","g","g","k"};
    std::cout<<count(std::string("g"),str)<<'\n';
    std::cout<<sum0({1,2,2,3})<<'\n';
    std::cout<<sum1({1,2,2,3})<<'\n';
    return 0;
}