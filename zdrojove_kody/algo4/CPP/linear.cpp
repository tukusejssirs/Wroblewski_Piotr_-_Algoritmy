#include <iostream>
using namespace std;

const	int n=10;

int	tab[n]={1,2,3,2,-7,44,5,1,0,-3};

int szukaj(int tab[n],int x)
{
int i;
for(i=0;(i<n)&&(tab[i]!=x);i++);
return i;
}

int main()
{
cout << szukaj(tab,7) <<endl;
cout << szukaj(tab,-7) <<endl;
}
