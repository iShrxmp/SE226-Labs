#include <iostream>
#include <string>
using namespace std;
int variables(){
    float var1;
    float var2;
    cin>>var1;
    cin>>var2;
    cout<<"Here are your variables and their summation, difference and multiplication results."<<endl;
    float sum=var1+var2;
    float diff=var1-var2;
    float prod=var1*var2;
    cout<<var1<<"\n"<<var2<<"\n"<<sum<<"\n"<<diff<<"\n"<<prod<<"\n";
    return 0;
    //Since this part doesn't require anything related to student credentials, I decided to separate it from main method
}
int main() {
    string name;
    double stdid;
    cout<<"What is your name?\n";
    cin>>name;
    cout<<"Hello " + name +"."<<endl;
    cout<<"What is your Student ID?"<<endl;
    cin>>stdid;
    cout<<"Your ID is ";
    printf("%.0f",stdid);
    cout<<".\n"<<endl;
    cout<<"Can you enter 2 variables for me?"<<endl;
    variables();
    int lab;
    int mdt;
    int final;
    cout<<"What's your lab score?"<<endl;
    cin>>lab;
    cout<<"What's your midterm score?"<<endl;
    cin>>mdt;
    cout<<"What's your final score?"<<endl;
    cin>>final;
    float last=float(lab)*0.25;
    last+=float(mdt)*0.35;
    last+=float(final)*0.4;
    cout<<"Name: "<<name<<"\n"<<"Lab: "<<lab<<"\n"<<"Midterm: "<<mdt<<"\n"<<"Final: "<<final<<"\n"<<"Last Score: "<<last<<"\n"<<endl;
    cout<<"*\n"<<"**\n"<<"***\n"<<"**\n"<<"*";
    return 0;
}
