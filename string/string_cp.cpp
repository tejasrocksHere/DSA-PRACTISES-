#include <iostream>
#include<vector>
#include<string>
using namespace std;

string reverseStringWordWise(string s)
{
    vector <string> str;
    int start=0;

    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
        {
            str.push_back(s.substr(start,i-start));
            start=i+1;
        }
    }
            str.push_back(s.substr(start));

    string ans = "";
    for(int i=str.size()-1;i>=0;i--){
        ans += str[i];
        if(i != 0) ans += " ";
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
