#include <windows.h>
#include <stdio.h>
#include <string>
#include <assert.h>
#include <iostream>
using namespace std;

int *findNext(string P){
int m = P.length();
assert( m > 0 );

int *next = new int[m];
assert( next != 0);
next[0] = -1; 

int j = 0,k = -1;
while(j < m-1){
    if (k >= 0 && P[k] != P[j]){
		//k = next[k];
		k = -1;
	}
    j++; k++; next[j] = k;
}

return next;
}

int main(int argc, char *argv[])
{
    string t = "abcabcd";
    string p = "aaaabaaaac";
    int *N;     
    cout << "the text to be matched is :" << t;
    
     
    N = findNext(p);
    cout << "the next array of pattern" << p << "is :" << endl;
    for (int i=0; i< p.length(); i++)
        cout << N[i] << " " ;
    cout << endl;
	Sleep(100000);

}
