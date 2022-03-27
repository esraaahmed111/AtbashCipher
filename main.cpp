#include <iostream>
using namespace std;
string s;
char letters[] = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'}; //using frequency array.
void atbash(string s);
int main() {


        string message;
        getline(cin,message);
        bool flag = true ;
        for( int i=0; i < message.size(); i++){
            if(message[i] == ' '){
                continue;
            }
            if (message[i]-'A'<0 || message[i]-'A'>26){
            flag = false;
            break;
            }
        }#include <iostream>
using namespace std;
string s;
char letters[] = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'}; //using frequency array.
void atbash(string s);
int main() {


        string message;
        getline(cin,message);
        bool flag = true ;
        for( int i=0; i < message.size(); i++){
            if(message[i] == ' '){
                continue;
            }
            if (message[i]-'A'<0 || message[i]-'A'>26){
            flag = false;
            break;
            }
        }
        if(flag == true) {
            atbash(message);
        }else cout << "invalid" << endl;


    return 0;
}

void atbash(string s) {
    string ans;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' '){
            ans += ' ' ;
            continue;
        }
        ans += letters[s[i] - 'A'];
    }


cout<<ans;
}

        if(flag == true) {
            atbash(message);
        }else cout << "invalid" << endl;


    return 0;
}

void atbash(string s) {
    string ans;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' '){
            ans += ' ' ;
            continue;
        }
        ans += letters[s[i] - 'A'];
    }


cout<<ans;
}
