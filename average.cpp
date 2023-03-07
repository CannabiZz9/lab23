#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){

    int sum=0, count=0;
    
    if(argc !=1 ){
       
        for (int i = 1; i < argc; i++) {
    sum += atof(argv[i]);
    count++;
    }
    sum = sum/count;
    cout << "---------------------------------\n";
    cout << "Average of " << count << " numbers = " << sum << "\n";
    cout << "---------------------------------\n";
    }
    else{
     cout << "Please input numbers to find average.";
    }

    return 0;
}
