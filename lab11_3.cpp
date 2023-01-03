#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    
    ifstream source;
    string textline;
    double sum;
    double avgp2;
    double sump2;
    int N;
    source.open("score.txt");
    while(getline(source, textline)){
        sum += stof(textline);
        sump2 += pow(stof(textline),2);       
        N++;
        
    }
    avgp2 = pow(sum/N, 2);

    cout << "Number of data = " << N<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum/N<<"\n";
    cout << "Standard deviation = "<< pow((sump2/N)-avgp2, 0.5)<<"\n";
}