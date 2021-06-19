/*By Meda Hemal*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream write("text.txt");
    write<<"c++ is cool ";
    write.close();
    string name;
    ifstream Read("text.txt");
    while(getline(Read,name)){
        cout<<name;
    }
    Read.close();
}
