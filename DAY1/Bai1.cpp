#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    bool check = true;
    if(str1.length() ==  str2.length())
    {

        int j = str1.length() - 1;
        for(int i = 0; i < str1.length(); i++)
        {
            if(str1[i] != str2[j])
            {
                check = false;
                break;
            }
            j--;
        }
    }else{
        check = false;
    }


    if(check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

//int check2[50];
//    int check3[50];
//    int z = str2.length();
//    for(int i = 0; i < str1.length(); i++)
//    {
//        check2[z-1] = str1[i] * 1;
//        check3[i] = str2[i] * 1;
//        z--;
//    }
//    bool check = true;
//    if(str2.length() == str1.length())
//    {
//        for(int j = 0; j < str1.length(); j++)
//        {
//            if(check2[j] != check3[j] )
//            {
//                check = false;
//                break;
//            }
//        }
//    }
//    else
//    {
//        check = false;
//    }
//    if(check)
//    {
//        cout << "YES";
//    }
//    else
//    {
//        cout << "NO";
//    }
