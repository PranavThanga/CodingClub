#include <iostream>
#include <string.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main(){
/*
    char greeting[50] = "Hello World";
    int index = 0;

    while (greeting[index] != '\0'){ // "\0" string terminator; null
        cout << greeting[index];
        index++;
    }

    cout << "\nThe length of the greeting is: " << index;
    cout << "\nThe length of the greeting using strlen is: " << strlen(greeting) << endl;

    char greeting2[50];
    strcpy(greeting2, greeting); // Copies message to greeting

    char message[] = "Hello";
    char name[100];
    cin >> name;

    char fullmessage[130];
    strcpy(fullmessage, message);
    strcat(fullmessage, ", ");
    strcat(fullmessage, name);
    strcat(fullmessage, "!");

    cout << fullmessage << endl; */

    char c[100];
    cin >> c;

    char capitalized[100];

    int cSize = 0;

    for (int i = 0; c[i] != '\0'; i++){
        capitalized[i] = toupper(c[i]);
        cSize++;
    }

    reverse(c, c + strlen(c));

    cout << capitalized << endl;
    cout << c << endl;

}

