#include <iostream>
#include <iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sd = 0;
    float rxi = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum+=stof(textline);
        rxi+=(pow(stof(textline),2));
        count++;
    }
    float mean = sum/count;
    sd=pow((rxi/count)-pow(mean,2),0.5);
    
    cout << "Number of data = "<< count << '\n';
    cout << setprecision(3);
    cout << "Mean = "<< mean << '\n';
    cout << "Standard deviation = "<<sd;
}