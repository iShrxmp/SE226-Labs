#include <iostream>

double calculate_parameterized(int n, int k=1){
    if(k>n){
        return 0;
    }
    //In this part we make sure that integer k isn't bigger than n since the summation requires our k to be less or equal until the summation is complete.
    double step=((-1)*((k%2==0)?1:-1)/static_cast<double>(k));
    //First, we take static number -1 then we determine whether the incremented value of k is odd or even,
    // if the value is odd, we multiply the given value of '-1' by '-1' then divide by current value of k,
    // if the value is even, we multiply the given value of '-1' by '1' then divide by current value of k
    return step + calculate_parameterized(n,k+1);
    //This part here causes a recursion by making the return function go back into the 'calculate_parameterized' function until the conditions meet
}
int main() {
    int n;
    std::cout << "Enter value n:" << std::endl;
    std::cin>>n;
    double sum = calculate_parameterized(n);
    std::cout<<sum<<std::endl;
    return 0;
}