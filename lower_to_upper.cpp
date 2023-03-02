#include<bits/stdc++.h>
using namespace std;

char to_uppercase(char c){
    if(c >= 'a'&& c <= 'z'){
        return c - 32;
    }
    return c;
}
 int main()
 {
    string s1 = "abcd";

    // By using STL function.
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<s1<<endl;

    string s2 = "abcd";
    for(char &c : s2){
        c = to_uppercase(c);
    }
    cout<<s2<<endl;
    
 }