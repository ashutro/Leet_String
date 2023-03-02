#include<bits/stdc++.h>
using namespace std;


char to_lower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c;
}
int main(){
    string s1 = "ABCD";

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1<<endl;

    string s2 = "ABCD";

    for(char &c : s2){
        c = to_lower(c);
    }

    cout<<s2<<endl;

}