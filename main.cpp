
#include <iostream>
#include <string>
#include "ManipStr.h"
using namespace std;

int main() {
    // Instantiation : creation d'une variable à partir d'une classe
    //  (création d'un object d'une classe).


    string str = "M o h a n d";
    ManipStr objectManip = ManipStr(str, { ' ', 'h'});
    // modifiation de la variable
    //objectManip.setText(str);
    objectManip.setExlures({' '});

    // accés au variable
    cout << "Before: value text: " <<objectManip.getText()<<endl;
    cout << "Before: value size: " <<objectManip.getSize()<<endl;
    
    // utilisation des méthodes de la classe
    objectManip.removeChar();
    cout << "After: value text: " <<objectManip.getText()<<endl;
    cout << "Before: value size: " <<objectManip.getSize()<<endl;

    return 0;
}




