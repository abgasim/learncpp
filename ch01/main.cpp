#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

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
int main()
{
    std::cout<<"Hello WOrld!"<<std::endl;
    std::vector<int> v0{1,2,3,1,5,1,7,1,9};
    std::cout<<count(1,v0)<<'\n';
    std::list<std::string> str {"r","g","g","k"};
    std::cout<<count(std::string("g"),str)<<'\n';
    return 0;
}