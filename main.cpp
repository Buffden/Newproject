#include<iostream>
#include<conio.h>

using namespace std;

class loginmanager
{
private:
    string userid="Buffden";
    int a=1;
    string password="nicetry";
    string details="Bade W k neeche 10 cr rupya hai";
public:
    //int b=5;
    string inputuserid;
    string inputpassword;
    void login()
    {
        cout<<"If you already have an account, enter your user id and password when asked\nUserid: ";
        cin>>inputuserid;
        if(inputuserid!=userid)
        {
            cout<<"You probably have entered a wrong user id or you dont have an account created"<<endl<<inputuserid<<", please enter any key to relogin"<<endl;
            getch();
                login();
        }
        else if (inputuserid==userid)
        {
            cout<<"Password:";
            cin>>inputpassword;
            if(inputpassword==password)
            {
                cout<<endl<<"Welcome: "<<inputuserid<<endl;
                cout<<"ye lo ester egg: "<<details;
                getch();


            }


            else
            {
                cout<<endl<<"wrong password "<<userid<< ", please press any key to relogin"<<endl;
                getch();
                login();
               }
            }


    }
};
int main()
{
    loginmanager newlogin;
    //cout<<newlogin.a;
    //cout<<newlogin.b;
    newlogin.login();
    getch();
    return 0;


}
