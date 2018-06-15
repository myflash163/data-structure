//
// Created by mengyusheng on 2018/1/30.
//

#include <malloc.h>
#include <string>
#include <iostream>
#include <vector>
#include "string_stl.h"

using namespace std;

char *s1 = "Hello SYSU!";
char s2[20] = "hello SYSU!";
char s3[] = "Hello SYSU!";
char *s4 = (char *) malloc(20);

string str1;
string str2 = str1;
string str3 = "I am Yasuo";
string str4(10, 'a');
string str5(s4);
string str6("I am Ali");
string str7 = string(6, 'c');

vector<int> v1;
vector<string> v2;
vector<vector<int>> v3;
vector<int> v5 = {1, 2, 3, 4, 5};
vector<string> v6 = {"hi", "my"};
vector<int> v7(5, -1);
vector<int> v9(10);
vector<string> v10(4);

void aa() {
    string str("hi sysu");
    for (string::iterator it = str.begin(); it != str.end(); it++) {
        cout << *it << endl;
        *it = '1';
    }
    isdigit('c');
    for (int i = 0; i < 20; i++) {
        v1.push_back(i);
    }
    v1.empty();
    v1.size();
    v1 = v5;

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }
    for (vector<string>::iterator iter = v6.begin(); iter != v6.end(); iter++) {
        cout << *iter << endl;
    }


}


