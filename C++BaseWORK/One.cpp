#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {1,99,34,6,34};
    for(int i = 0;i<5;i++){
    cout << v[i] << " ";}
    int n = sizeof(v)/ sizeof(v[0]);
    sort(v, v + n);
    cout << endl;
    for(int j = 0 ; j <5;j++){
    cout << v[j] << " ";}
}