/*
 * @Author: iwan
 * @Description:
 * @Date: 2021-07-18 19:47:31
 * @FilePath: \VS-Code-C-and-Cpp\luogu\P1051.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class student {
  public:
    string name;
    double score, grade;
    bool is_cadre, is_west;
    int paper;
    const int acade = 8000, five4 = 4000, good = 2000, west_good = 1000, class_help = 850;
    int money;

    int is_acade() {
        return score >= 80 && paper >= 1 ? acade : 0;
    }

    int is_five4() {
        return score >= 85 && grade >= 80 ? five4 : 0;
    }

    int is_good() {
        return score >= 90 ? good : 0;
    }

    int is_west_good() {
        return is_west && score >= 85 ? west_good : 0;
    }

    int is_class_help() {
        return is_cadre && grade > 80 ? class_help : 0;
    }

    student(string name, int score, int grade, string c, string w, int paper) {
        this->name = name;
        this->score = score;
        this->grade = grade;
        this->is_cadre = c == "Y" ? true : false;
        this->is_west = w == "Y" ? true : false;
        this->paper = paper;
        this->money = this->is_acade() + this->is_five4() + this->is_good() + this->is_west_good() + this->is_class_help();
    }
};

int main() {
}