#include <iostream>
#include <vector>
using namespace std;
void printSubsequences(string str, string output, int i, vector<string>& v){
    int n = str.length();
    if(i >= n){
        v.push_back(output);
        return;
    }

    //exclude
    printSubsequences(str, output, i+1, v);

    //include
    output = output + str[i];
    printSubsequences(str, output, i+1, v);
}
int main() {
    string str = "abc";
    int i = 0;
    string output = "";
    vector<string> v;
    printSubsequences(str, output, i, v);
    cout << "Printing all subsequences: " << endl;
    for(auto val:v){
        cout << val << " ";
    }

    cout << endl<< "Length of vector:" << v.size();

       

    return 0;
}