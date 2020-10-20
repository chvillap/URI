// https://www.urionlinejudge.com.br/judge/en/problems/view/1763

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string input;
    map<string, string> dict;
    map<string, string>::iterator it;

    dict["brasil"] = "Feliz Natal!";
    dict["alemanha"] = "Frohliche Weihnachten!";
    dict["austria"] = "Frohe Weihnacht!";
    dict["coreia"] = "Chuk Sung Tan!";
    dict["espanha"] = "Feliz Navidad!";
    dict["grecia"] = "Kala Christougena!";
    dict["estados-unidos"] = "Merry Christmas!";
    dict["inglaterra"] = "Merry Christmas!";
    dict["australia"] = "Merry Christmas!";
    dict["portugal"] = "Feliz Natal!";
    dict["suecia"] = "God Jul!";
    dict["turquia"] = "Mutlu Noeller";
    dict["argentina"] = "Feliz Navidad!";
    dict["chile"] = "Feliz Navidad!";
    dict["mexico"] = "Feliz Navidad!";
    dict["antardida"] = "Merry Christmas!";
    dict["canada"] = "Merry Christmas!";
    dict["irlanda"] = "Nollaig Shona Dhuit!";
    dict["belgica"] = "Zalig Kerstfeest!";
    dict["italia"] = "Buon Natale!";
    dict["libia"] = "Buon Natale!";
    dict["siria"] = "Milad Mubarak!";
    dict["marrocos"] = "Milad Mubarak!";
    dict["japao"] = "Merii Kurisumasu!";

    while (cin >> input) {
        it = dict.find(input);
        if (it == dict.end())
            cout << "--- NOT FOUND ---\n";
        else
            cout << it->second << "\n";
    }

    return 0;
}
