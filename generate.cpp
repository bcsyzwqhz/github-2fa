#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ofstream fout("main.py");
    string token;
    cout<<"Paste your authentication token here:";
    cin>>token;
    cout<<endl<<"Generating...";
    fout<<"import pyotp"<<endl;
    fout<<"import pyperclip as cp"<<endl;
    fout<<"secret_key = \'"<<token<<"\'\n";
    fout<<"cp.copy(pyotp.TOTP(secret_key).now())"<<endl;
    fout<<"print(cp.paste())";
    cout<<endl<<"Finished!";
    return 0;
}
