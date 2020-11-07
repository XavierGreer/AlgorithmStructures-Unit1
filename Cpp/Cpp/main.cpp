//
//  main.cpp
//  Cpp
//
//  Created by Xavier Greer on 7/23/20.
//  Copyright © 2020 Xavier Greer. All rights reserved.
//

//Unit 1 Submission 1

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    string CustomerName[15] = {"Stan Simpson","James Grut","Fred Flinstone","Tammi Silver","Joshua Smith","Harry Potter","Rondall Teller","Juan Vice","Dennis Corper","Wendy Wells","Mac McDonald","Ron Burgandy","Vince Hender","Kimberly Stelt","Jessica Bernie"};
//    string CustomerAddress[15] = {"123 Address RD","432 Corner LN","222 Grove ST","634 Amber Circle","1184 Real CT","356 Cone RD","6244 Flapjack LN","8562 Jammer RD"," 1242 Copper ST","748 Pancake CT","43356 Indusrty LN","3095 Table RD","57870 Flipper ST","3011 Kansas LN","707 Drum Circle"};
//    string City[15] = {"Palm Bay","Colorado Springs","Los Angeles","Montgomery","Melbourne","Houston","Denver","Nashville","San Diego","Dallas","Hartford","Dover","Memphis","Knoxville","Hartford"};
//    string State[15] = {"FL","CO","CA","AL","FL","TX","CO","TN","CA","TX","CT","DE","TN","TN","CT"};
//    int Zip[15] = {12345,67891,27483,90854,33004,11044,33222,33311,99605,88886,55988,44557,30554,15999,44433};
//
//    int ZipSize = sizeof(Zip)/sizeof(Zip[0]);
//
//    for(int i=0; i<ZipSize; i++){
//        cout << "Zip Code " << i+1 << ": \t" << Zip[i] << "\n";
//    }
//
//}

//Unit 1 Submission 2

#include <iostream>

using namespace std;


//structure for nodes is defined
struct blocks{
    
    int nodeData;
    blocks *next;
    
};

class linkedList{
    
private:
    blocks *head,*tail;
public:
    linkedList(){
        head = NULL;
        tail = NULL;
        
    }
    void add_node(int n){
        blocks *tempNode = new blocks;
        tempNode -> nodeData = n;
        tempNode -> next = NULL;
        
        if(head == NULL){
            head = tempNode;
            tail = tempNode;
            
        }
        else{
            tail -> next = tempNode;
            tail = tail -> next;
        }
    }
};

int main(){
    linkedList test;
    
    return 0;
}
