#include <iostream>
using namespace std;

class myString
{
private:
    string str;
    int vowels;
public:
    int CountVowel(){
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'||str[i] == 'u'){
                count++;
            }
        }
            return count;
        
    }

    int CountConstants(){
        return (str.length()- CountVowel() );
    }

    bool isPalindrome(){
        string str_t;
        str_t = str;

        int j = 0;
        for (int i = str.length()-1; i >= 0; i--)
        {
            str_t[i] = str[j];
            j++;
        }
        
        if (str_t == str)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

    myString(string str_t){
        str = str_t;
    }
};




int main(){
    string str;
    cout << "String: " ;
    cin >> str;
    myString S1(str);
    cout << "Consonents are: " << S1.CountConstants() << endl;
    cout << "Vowels are: " << S1.CountVowel() << endl;
    if (S1.isPalindrome())
    {
        cout << "This is a Palindrom";
    }
    else{
        cout << "It is not a palindrome";
    }
    
    return 0;
}