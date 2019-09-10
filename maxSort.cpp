#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    v = {6,1,3,2,1};
    //initialize v
    /* your code here */


    cout<<"v = {6, 1, 3, 2, 1}"<<endl;// print the unsorted v
    /* your code here */


   maxSort( v);// sort v
    /* your code here */


   print(v);// print the sorted v
    /* your code here */


    return 0;
}

    /* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        int current_Max = 0;
        int current_Position = 0;/*complete the code*/

        for(int j=0;j<=i;j++){
        if(list[j]>current_Max){
            current_Max = list [j];
            current_Position = j;
        } /*complete the code*/
        }
        swap(list[current_Position], list[i]); /*complete the code*/
    }
}

// swap function
void swap(int& a, int& b){
   int temp = a;
   a = b;
   b = temp;/*your code here*/
}

// print function
void print(const vector<int>& list){
   cout<<"v = {";
   for(int x = 0; x<5; x++){
       if(x<4) {
           cout << list[x] << ", ";
       }
       else{
           cout<< list[x];
   }
   }
    cout<<"}";/*your code here*/
}

