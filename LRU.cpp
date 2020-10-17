#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class Lru{
//     int capacity;
//     list<pair<int,int>> lrlist;

//     unordered_map<int,list<pair<int,int>>:: iterator> hs;

//     void move_it(int key,int val){
//         lrlist.erase(hs[key]);
//         lrlist.push_front(make_pair(key,val));
//         hs[key]= lrlist.begin();
//    }

//    public:

//    Lru(int capacity){
//        this->capacity= capacity;
//    }

//    int get(int key){
//        if(hs.find(key)== hs.end() )
//        return -1;

//        int val= (*hs[key]).second;
//        move_it(key,val);

//        return val;
//    }


//    int put(int key,int value){

//        if(hs.find(key)!= hs.end()){
//        move_it(key,value);}

//        else{

//            lrlist.push_front(make_pair(key,value));
//            hs[key]= lrlist.begin();
//            if(hs.size()> capacity){
//             //    erase

//             hs.erase(lrlist.back().first);
//             lrlist.pop_back();
//            }
//        }
//    }
// };

// int main(){

//     Lru l(2);
//     l.put(1,1);
//     l.put(2,2);
//     l.get(1);
//     l.put(3,3);
//     l.get(2);
//     l.put(4,4);
//     l.get(1);
//     l.get(3);
//     l.get(4);
//     return 0;

// }




int  main(){
    char s;

    s='a';

int c= s-'a';
return c;

}