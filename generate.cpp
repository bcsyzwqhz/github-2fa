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
    fout<<"# These codes are auto generate, don't move it."<<endl;
    fout<<"import pyotp"<<endl;
    fout<<"import pyperclip as cp"<<endl;
    fout<<"secret_key = \'"<<token<<"\'\n";
    fout<<"cp.copy(pyotp.TOTP(secret_key).now())"<<endl;
    fout<<"print(cp.paste())";
    fout.close();
    system(".\build.bat");
    cout<<endl<<"Finished!";
    return 0;
}
