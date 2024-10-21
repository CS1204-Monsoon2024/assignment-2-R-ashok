#include "HashTable.cpp"
#include <iostream>
using namespace std;

int nextprime(int k){
    int i=2k+1;
    bool found=false;
    
    while (!found){
     bool isPrime=true;
     for(int j=2; j*j<=i;j++){
            if(i%j==0){
             isPrime=false;
             break;}
        }

        if(isPrime)
         found=true;
        else
         i=i+2;
    }
 return i;
 
 }
//returns next prime number

struct hash{
    int* arr;
    int size;
    int currentsize;
};

int main[1000];

hash make(int size){
    int k=size;
    for(int i=0; i<k; i++){
        main[i]=-5;
    }
    struct hash n;
    n.size=size;
    n.currentsize=0;
    n.arr=main;

    return n;

}

void insertinto(struct hash k,int val){
    int c= val%k.size;
    for(int i=0; i<(k.size+1)/2; i++){
     int quad=(c+i*i)%k.size;
     if (k.arr[quad]==-5){
        k.arr[quad]=val;
        k.currentsize++;
        return;
     }
     else if(k.arr[quad]==val){
        cout << "Duplicate key insertion not allowed" << endl;
        return;
     }      
    }
  cout<< "no space in table" << endl;
    return;}  

void resize(hash k){
    int oldsize=k.size;
    k.size=nextprime(size);
    int p=k.currentsize;
    k.currentsize=0;
    int* oldarr=k.arr;

    for (int i=0;i<k.size;i++){
        main_arr[i]=-5;
    }

    for (int i=0;i<oldsize; i++){
        if (oldarr[i]!=-5){
            k.currentsize++;
            insertinto(k,oldarr[i]);
        }
}}



int main(){
    struct hash ht=make(7);

    void insert(int val){
        insertinto(ht,int val);
    }

    // Example test case
    ht.insert(1);
    ht.printTable();
    ht.insert(6);
    ht.printTable();
    ht.insert(15);
    ht.printTable(); 
    ht.insert(25);
    ht.printTable();
    ht.remove(15);
    ht.printTable();
    ht.insert(29);  
    ht.printTable(); 

    int find = ht.search(22);
    std::cout << "Found at:" << find << std::endl;

    return 0;
}
